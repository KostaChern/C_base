#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include "temp_functions.h"

int main(int argc, char *argv[])
{
    char * file_name;       //Переменная для параметра -f
    int input_month = 0;    //Переменная для параметра -m
    int rez_arg = 0;        //Переменная для аргументов командной строки
    opterr=0;
    while ((rez_arg = getopt(argc, argv, "hf:m::")) != -1)
    {
        switch (rez_arg)
        {
        case 'h':
            help();
            break;
        case 'f':
            file_name = optarg;
            break;
        case 'm':
            input_month = atoi(optarg);
            break;
        case '?':
            printf("Error : incorrect parameter!\n");
            break;
        };
    };

    if (argc < 2){
        printf("\nThe program reads the temperature sensor data from a file\n");
        printf("and prints statistics for the year or month\n");
        printf("To output instructions, enter the parameter > -h <\n");
    }

    if(file_name && ((input_month >= 0) && (input_month < 13)))
    {
        printf("%s\n", file_name);
        struct sensor * info;                                               //Объявление массива структурного типа
        info = (struct sensor *)malloc(SIZE * sizeof(struct sensor));       
        long number_of_lines = add_info(info, file_name);                   //Основной счетчик количества элементов в массиве
        if(input_month == 0)
        {
            statistics_output(info, number_of_lines);
        }
        else 
        {
            statistics_output_month(info, number_of_lines, input_month);
        }
        free(info);
    }
    else
    {
        printf("\nIncorrect parameter\n");
        help();
    }
    return 0;
}