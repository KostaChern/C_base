#include <stdio.h>
#include <string.h> //объявление библиотеки обработки строк
#include <math.h>   //объявление математической библиотеки

// Задача 6. Чаще других
// Дан массив из 10 элементов. Определить, какое число в массиве встречается
// чаще всего. Гарантируется, что такое число ровно 1.
// Данные на входе: 10 целых числе через пробел
// Данные на выходе: Одно число, которое встречается чаще других.
// Пример
// Данные на входе: 4 1 2 1 11 2 34 11 0 11
// Данные на выходе: 11

int Find_friq(int *, int);
int Input(int arr[], int n);

int main()
{
    enum { SIZE = 10 };
    int numb[SIZE];
    printf("Enter 10 integers: \n");
    Input(numb, SIZE);
    printf("Number is more common:  %d ", Find_friq(numb, SIZE));
    return 0;
}

int Input(int arr[], int n)
{
    int i;
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    return i;
}


int Find_friq(int *numb, int len)
{
    int count[len];
    for (int i = 0; i < len; i++)
        count[i] = 0;
    int countMax = 0, findIndex = 0;
    for (int i = 0; i < len; i++)
        for (int j = i + 1; j < len; j++)
            if (numb[i] == numb[j])
                count[i]++;
    for (int i = 0; i < len; i++)
        if (count[i] > countMax)
        {
            countMax = count[i];
            findIndex = i;
        }
    return numb[findIndex];
}