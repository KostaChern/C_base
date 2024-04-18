#include <stdio.h>
#include <string.h> //объявление библиотеки обработки строк
#include <math.h>   //объявление математической библиотеки

// Задача 5. Поменять местами
// Составить функцию, которая меняет в массиве минимальный и максимальный
// элемент местами. Прототип функции
// void change_max_min(int size, int a[])
// Данные на входе: Функция принимает на вход размер массива и
// массив чисел типа int
// Данные на выходе: Функция не возвращает значения, измененный
// массив сохраняется на месте исходного.
// Пример
// Данные на входе: 1 2 3 4 5 6 7 8 9 10
// Данные на выходе: 10 2 3 4 5 6 7 8 9 1

void change_max_min(int size, int a[]);

void PrintArray(int arr[], int n)
{
	for (int i = 0; i < n; i++)
	{
		printf("%d ", arr[i]);
	}
}

int main()
{
    enum { BUFFER_SIZE = 10 };
	int ar[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    PrintArray(ar, BUFFER_SIZE); printf ("\n");
	change_max_min(BUFFER_SIZE, ar);
	PrintArray(ar, BUFFER_SIZE);
	return 0;
}

void change_max_min(int size, int a[])
{
    int min = a[0];
    int max = a[0];
    int minPos = 0;
    int maxPos = 0;

    for (int i = 1; i < size; i++)
    {
        if (a[i] < min)
        {
            min = a[i];
            minPos = i;
        }
        if (a[i] > max)
        {
            max = a[i];
            maxPos = i;
        }
    }

    int temp = a[minPos];
    a[minPos] = a[maxPos];
    a[maxPos] = temp;
}