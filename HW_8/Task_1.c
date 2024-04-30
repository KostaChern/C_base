#include <stdio.h>
#include <string.h> //объявление библиотеки обработки строк
#include <math.h>   //объявление математической библиотеки

// Задача 1. Сортировка по возрастанию
// Написать только одну функцию, которая сортирует массив по возрастанию.
// Необходимо реализовать только одну функцию, всю программу составлять не
// надо.
// Строго согласно прототипу. Имя функции и все аргументы должны быть:
// void sort_array(int size, int a[])
// Всю программу загружать не надо, только одну эту функцию. Можно просто
// закомментировать текст всей программы, кроме данной функции.
// Данные на входе: Функция принимает на вход, первый аргумент - размер
// массива, второй аргумент - адрес нулевого элемента.
// Данные на выходе: Функция ничего не возвращает. Производит
// сортировку переданного ей массива по возрастанию.
// Пример №1
// Данные на входе: 20 19 4 3 2 1 18 17 13 12 11 16 15 14 10 9 8 7 6 5
// Данные на выходе: 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20
// Пример №2
// Данные на входе: 5 4 3 2 1
// Данные на выходе: 1 2 3 4 5


void sort_array(int size, int a[]);

void PrintArray(int arr[], int n)
{
	for (int i = 0; i < n; i++)
	{
		printf("%d ", arr[i]);
	}
}

int main()
{
	int ar[] = {20, 19, 4, 3, 2, 1, 18, 17, 13, 12, 11, 16, 15, 14, 10, 9, 8, 7, 6, 5};
	sort_array(20, ar);
	PrintArray(ar, 20);
	return 0;
}

void sort_array(int size, int a[])
{
	int i;
	int tmp;
	int flag;

	do
	{
		flag = 0;
		for (i = 1; i < size; i++)
		{
			if (a[i] < a[i - 1])
			{
				tmp = a[i];
				a[i] = a[i - 1];
				a[i - 1] = tmp;
				flag = 1;
			}
		}
	} while (flag);
}