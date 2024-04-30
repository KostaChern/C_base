#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "temp_functions.h"

//Функция проверки данных в строке. Если данные не соответствуют, то выводится сообщение с конкретной ошибкой и номером пропущеной строки
int checking_data(long string_counter, uint16_t year, uint8_t month, uint8_t day, uint8_t hour, uint8_t min, int8_t t)
{
    if(year != 2021)
    {
        printf("\nWARNING : The year does not correspond to the time period (2021)\n");
        printf("Year - >%d< | Month - %d | Day - %d | Hour - %d | Minute - %d | t - %d\n", year, month, day, hour, min, t);
        printf("Line %ld is skipped\n", string_counter);
        return 0;
    }
    else if ((month < 1) || (month > 12))
    {
        printf("\nWARNING : Date format error (Month)\n");
        printf("Year - %d | Month - >%d< | Day - %d | Hour - %d | Minute - %d | t - %d\n", year, month, day, hour, min, t);
        printf("Line %ld is skipped\n", string_counter);
        return 0;
    }
    else if ((day < 1) || (day > 31))
    {
        printf("\nWARNING : Date format error (Day)\n");
        printf("Year - %d | Month - %d | Day - >%d< | Hour - %d | Minute - %d | t - %d\n", year, month, day, hour, min, t);
        printf("Line %ld is skipped\n", string_counter);
        return 0;
    }
    else if ((hour < 0) || (hour > 23))
    {
        printf("\nWARNING : Date format error (Hour)\n");
        printf("Year - %d | Month - %d | Day - %d | Hour - >%d< | Minute - %d | t - %d\n", year, month, day, hour, min, t);
        printf("Line %ld is skipped\n", string_counter);
        return 0;
    }
    else if ((min < 0) || (min > 59))
    {
        printf("\nWARNING : Date format error (Minute)\n");
        printf("Year - %d | Month - %d | Day - %d | Hour - %d | Minute - >%d< | t - %d\n", year, month, day, hour, min, t);
        printf("Line %ld is skipped\n", string_counter);
        return 0;
    }
    else if ((t < -99) || (t > 99))
    {
        printf("\nWARNING : The sensor value is out of range\n");
        printf("Year - %d | Month - %d | Day - %d | Hour - %d | Minute - %d | t - >%d<\n", year, month, day, hour, min, t);
        printf("Line %ld is skipped\n", string_counter);
        return 0;
    }
    else
    {
       return 1;
    }
}

//Функия вывода статистики из файла, считываются все записи
void statistics_output(struct sensor* info, long string_counter)
{
    int minT = info[0].t;
    int maxT = info[0].t;
    long sum = 0;
    float average = 0;
    for (long i = 0; i < string_counter; i++)
    {
        if (minT > info[i].t)
        {
            minT = info[i].t;
        }
        if (maxT < info[i].t)
        {
            maxT = info[i].t;
        }
        sum += info[i].t;
    }
    average = (float)sum / string_counter;
    printf("\nFull statistics\n");
    printf("Sensor readings : %ld\n", string_counter);
    printf("Minimum temperature = %d\n", minT);
    printf("Maximum temperature = %d\n", maxT);
    printf("Average temperature = %.1f\n", average);
}

//Функия вывода статистики из файла, считываются записи за указаный месяц
void statistics_output_month(struct sensor* info, long string_counter, int input_month)
{
    int minT = 100;
    int maxT = -100;
    long sum = 0;
    float average = 0;
    long line_count_month = 0;                  //Счетчик колличества записей за конкретый месяц
    for (long i = 0; i < string_counter; i++)
    {
        if((info[i].month == input_month))
        {
            if (minT > info[i].t)
            {
                minT = info[i].t;
            }
            if (maxT < info[i].t)
            {
                maxT = info[i].t;
            }
            line_count_month++;
            sum += info[i].t;
        }
    }
    average = (float)sum / line_count_month;
    printf("\nStatistics for the %d month\n", input_month);
    printf("Sensor readings : %ld\n", line_count_month);
    printf("Minimum temperature = %d\n", minT);
    printf("Maximum temperature = %d\n", maxT);
    printf("Average temperature = %.1f\n", average);
}

//Функция переноса данных из строки в конкретную структуру
void add_record(struct sensor *info, long string_number, uint16_t year, uint8_t month, uint8_t day, uint8_t hour, uint8_t min, int8_t t)
{
    info[string_number].year = year;
    info[string_number].month = month;
    info[string_number].day = day;
    info[string_number].hour = hour;
    info[string_number].min = min;
    info[string_number].t = t;
}

//Функция в которой происходит чтение из файла и запись в массив структурного типа 
//при помощи вспомогательных фунций checking_data() и add_record()
long add_info(struct sensor *info, char * file_name)
{
    FILE *fp;
    fp = fopen(file_name, "r");
    long counter = 0;                           //Счетчик колличества записей в массив
    long err_string_counter = 0;                //Счетчик для вывода номера строки с ошибкой
    if (fp == NULL)
    {
        printf("ERROR : the file cannot be opened.\n");
        exit(-1);
    }
        
    int Y, M, D, H, Min, T, r;                  //Переменные для переноса данных    
    long errors = 0;                            //Счетчик колличества ошибок
    while ((r = fscanf(fp, "%d;%d;%d;%d;%d;%d", &Y, &M, &D, &H, &Min, &T)) > 0)
    {
        err_string_counter++;
        if (r < 6)
        {
            char s[20];
            r = fscanf(fp, "%[^\n]", s);
            printf("\nERROR : Data is lost\nThe line %ld is skipped\n", err_string_counter);
            errors++;
        }
        else
        {
            if(checking_data(err_string_counter, Y, M, D, H, Min, T))
            {
                add_record(info, counter++, Y, M, D, H, Min, T);
            }
            else
            {
                errors++;
            }
        }
    }
    printf("\nThe number of correct entries in the file : %ld\n",counter);
    printf("The number of missing lines : %ld\n",errors);
    
    fclose(fp);
    return counter;  
}

//Функция вывода подсказки на экран
void help()
{
    printf("-h                 Help\n");
    printf("-f <filename.csv>  Required parameter\n");
    printf("                   This parameter is required to run the program\n");
    printf("                   You must specify the name of the file that contains the data\n");
    printf("-m [1...12]        Optional parameter\n");
    printf("                   If this parameter is used, statistics for the specified month are displayed\n");
    printf("                   If this parameter is not used, the full statistics are displayed.\n");
}
