#include <stdio.h>
#include <string.h> //объявление библиотеки обработки строк
#include <math.h>   //объявление математической библиотеки

// Задача 4. Отсортировать по последней цифре
// Считать массив из 10 элементов и отсортировать его по последней цифре.
// Данные на входе: 10 целых чисел через пробел
// Этот же массив отсортированный по последней цифре
// Пример №1
// Данные на входе: 14 25 13 30 76 58 32 11 41 97
// Данные на выходе: 30 11 41 32 13 14 25 76 97 58
// Пример №2
// Данные на входе: 109 118 100 51 62 73 1007 16 4 555
// Данные на выходе: 100 51 62 73 4 555 16 1007 118 109

int Input(int arr[], int n);
void Sort_Arr(int a[], int n);
void Print_Arr(int arr[], int n);

int main()
{
    enum { SIZE = 10 };
    int arr[SIZE];

    printf("Enter 10 integers: \n");
    Input(arr, SIZE);
    Sort_Arr(arr, SIZE);
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

void Sort_Arr(int a[], int n)
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