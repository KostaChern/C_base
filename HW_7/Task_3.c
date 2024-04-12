#include <stdio.h>
#include <string.h> //объявление библиотеки обработки строк
#include <math.h>	//объявление математической библиотеки

// Задача 3. Циклический сдвиг массива вправо на 4
// Считать массив из 12 элементов и выполнить циклический сдвиг ВПРАВО на 4
// элемента.
// Данные на входе: 12 целых чисел через пробел
// Данные на выходе: 12 целых чисел через пробел
// Пример №1
// Данные на входе: 4 -5 3 10 -4 -6 8 -10 1 0 5 7
// Данные на выходе: 1 0 5 7 4 -5 3 10 -4 -6 8 -10
// Пример №2
// Данные на входе: 1 2 3 4 5 6 7 8 9 10 11 12
// Данные на выходе: 9 10 11 12 1 2 3 4 5 6 7 8

int Input(int arr[], int n);
int Shift_Right(int arr[], int n);

int main()
{
	enum { SIZE = 12 };
	int num [SIZE];

	printf("Enter 12 integers: \n");
	Input(num, SIZE);
	Shift_Right(num, SIZE);
	// printf("%d\n", num);

	return 0;
}

int Input(int arr[], int n)
{
	int i;
	for (i = 0; i < n; i++) 
		scanf("%d", &arr[i]);
	return i;
}

int Shift_Right(int arr[], int n)
{
	for (int i = 8; i < n; i++)
	{
		printf ("%d ", arr[i]);
	}
    for (int i = 0; i < 8; i++)
	{
		printf ("%d ", arr[i]);
	}
	return 0;
}