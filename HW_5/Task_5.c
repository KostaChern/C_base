#include <stdio.h>
#include <string.h> //объявление библиотеки обработки строк
#include <math.h>   //объявление математической библиотеки

// Задача 5. Вторая с конца ноль
// Считать массив из 10 элементов и отобрать в другой массив все числа, у
// которых вторая с конца цифра (число десятков) – ноль.
// Данные на входе: 10 целых чисел через пробел.
// Данные на выходе: Целые числа через пробел, у которых вторая с конца
// цифра - ноль
// Пример
// Данные на входе: 40 105 203 1 14 1000 22 33 44 55
// Данные на выходе: 105 203 1 1000

int Input(int arr[], int n);
void Sort_By_Null(int a[], int n);
void Print_Arr(int arr[], int n);

int main()
{
    enum { SIZE = 10 };
    int arr[SIZE];

    printf("Enter 10 integers: \n");
    Input(arr, SIZE);
    Sort_By_Null(arr, SIZE);
    Print_Arr(arr, SIZE);

    return 0;
}

int Input(int arr[], int n)
{
    int i;
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    return i;
}

void Print_Arr(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}

void Sort_By_Null(int a[], int n)
{
    int i;
    int tmp;
    int flag;

    do
    {
        flag = 0;
        for (i = 1; i < n; i++)
        {
            if (a[i] % 10 < a[i - 1] % 10)
            {
                tmp = a[i];
                a[i] = a[i - 1];
                a[i - 1] = tmp;
                flag = 1;
            }
        }
    } while (flag);
}