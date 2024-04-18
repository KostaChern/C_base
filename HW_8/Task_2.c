#include <stdio.h>
#include <string.h> //объявление библиотеки обработки строк
#include <math.h>   //объявление математической библиотеки

// Задача 2. Четные в начало
// Написать только одну функцию, которая ставит в начало массива все четные
// элементы, а в конец – все нечетные. Не нарушайте порядок следования чисел
// между собой. Строго согласно прототипу:
// void sort_even_odd(int n, int a[])
// Данные на входе: Функция принимает на вход целые числа
// Данные на выходе: Отсортированный исходный массив
// Пример №1
// Данные на входе: 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1
// Данные на выходе: 20 18 16 14 12 10 8 6 4 2 19 17 15 13 11 9 7 5 3
// 1
// Пример №2
// Данные на входе: 1 0 1 0 1
// Данные на выходе: 0 0 1 1 1

void sort_even_odd(int n, int a[]);
void PrintArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}

int main()
{
    enum { BUFFER_SIZE = 20 };
    int ar[] = {20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    sort_even_odd(BUFFER_SIZE, ar);
    PrintArray(ar, BUFFER_SIZE);
    return 0;
}

void sort_even_odd(int n, int a[])
{
    int temp[n];
    int evenNumb = 0;
    int oddNumb = n - 1;

    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0)
        {
            temp[evenNumb++] = a[i];
        }
        else
        {
            temp[oddNumb--] = a[i];
        }
    }

    for (int i = 0; i < n; i++)
    {
        a[i] = temp[i];
    }
}