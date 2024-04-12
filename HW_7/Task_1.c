#include <stdio.h>
#include <string.h> //объявление библиотеки обработки строк
#include <math.h>   //объявление математической библиотеки

// Задача 1. Среднее арифметическое чисел
// Ввести с клавиатуры массив из 5 элементов, найти среднее арифметическое
// всех элементов массива.
// Данные на входе: 5 целых ненулевых чисел через пробел
// Данные на выходе: Одно число в формате  "%.3f"

// Пример №1
// Данные на входе: 4 15 3 10 14
// Данные на выходе: 9.200
// Пример №2
// Данные на входе: 1 2 3 4 5
// Данные на выходе: 3.000

float Min_arr (int arr[], int n);

int main()
{
	enum {SIZE = 5}; 
	int arr [SIZE];

	printf("Enter 5 integers: \n");
	float sum_aver = Min_arr(arr, SIZE);
	printf("Arithmetic mean: %.3f\n", sum_aver);

    return 0;
}

float Min_arr (int arr[], int n){
	float sum = 0;
	for (int i = 0; i < n; i++){
		scanf ("%d", &arr[i]);
		sum += arr[i];
	} 
	return sum / 5;
}