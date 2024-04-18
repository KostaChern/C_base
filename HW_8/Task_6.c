#include <stdio.h>
#include <string.h> //объявление библиотеки обработки строк
#include <math.h>   //объявление математической библиотеки

// Задача 6. Больше среднего
// Определить количество положительных элементов квадратной матрицы,
// превышающих по величине среднее арифметическое всех элементов главной
// диагонали. Реализовать функцию среднее арифметическое главной
// диагонали.
// Данные на входе: 5 строк по 5 целых чисел через пробел
// Данные на выходе: Одно целое число
// Пример
// Данные на входе: 1 1 1 1 1 2 2 2 2 2 3 3 3 3 3 4 4 4 4 4 5 5 5 5 5
// Данные на выходе: 10

const int matrix_size = 5;
int main_diagonal(int matrix[matrix_size][matrix_size]);

int main()
{
	int matrix [5][5] = {
		{1, 1, 1, 1, 1},
		{2, 2, 2, 2, 2},
		{3, 3, 3, 3, 3},
		{4, 4, 4, 4, 4},
		{5, 5, 5, 5, 5}};

	int result = main_diagonal(matrix);
	printf("main_diagonal = %d ", result);

	return 0;
}

int main_diagonal(int matrix[matrix_size][matrix_size])
{
	int sum = 0;
	int count = 0;

	for (int i = 0; i < matrix_size; i++)
	{
		sum += matrix[i][i];
		count++;
	}

	int average = sum / count;
	int positive_count = 0;

	for (int i = 0; i < matrix_size; i++)
		for (int i = 0; i < matrix_size; i++)
		{
			if (matrix[i][i] > average)
			{
				positive_count++;
			}
		}

	return positive_count;
}