#include <stdio.h>
#include <string.h> //объявление библиотеки обработки строк
#include <math.h>	//объявление математической библиотеки

// Задача 2. Найти минимум
// Ввести с клавиатуры массив из 5 элементов, найти минимальный из них.
// Данные на входе: 5 целых чисел через пробел
// Данные на выходе: Одно единственное целое число
// Пример №1
// Данные на входе: 4 15 3 10 14
// Данные на выходе: 3
// Пример №2
// Данные на входе: 1 2 3 4 -5
// Данные на выходе: -5


int Input(int arr[], int n);
int Shift_Right(int arr[], int n);

int main()
{
	enum { SIZE = 5 };
	int num [SIZE];

	printf("Enter 5 integers: \n");
	Input(num, SIZE);
	int min = Shift_Right(num, SIZE);
	printf("Minimum number: %d\n", min);

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
	int min = arr[0];
	for (int i = 1; i < n; i++)
	{
		if (arr[i] < min)
		{
			min = arr[i];
		}
	}
	return min;
}