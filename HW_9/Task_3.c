#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Задача 3. Числа в массив
// В файле .txt дана строка, не более 1000 символов, содержащая буквы, целые
// числа и иные символы. Требуется все числа, которые встречаются в строке,
// поместить в отдельный целочисленный массив. Например, если дана строка
// "data 48 call 9 read13 blank0a", то в массиве числа 48, 9, 13 и 0. Вывести
// массив по возрастанию в файл .txt.
// Данные на входе: Строка из английских букв, цифр и знаков
// препинания
// Данные на выходе: Последовательность целых чисел
// отсортированная по возрастанию
// Пример
// Данные на входе: data 48 call 9 read13 blank0a
// Данные на выходе: 0 9 13 48

const int MAX_LINE_SIZE = 1000;
const int MAX_NUMBERS = 500;

int ChekNumbersOnly(char *str, int nums[])
{
	int i = 0, j = 0, num = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= '0' && str[i] <= '9')
		{
			num = atoi(&str[i]);
			nums[j++] = num;
			while (str[i] >= '0' && str[i] <= '9')
			{
				i++;
			}
		}
		i++;
	}

	return j;
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

int main()
{	
	char inputString[MAX_LINE_SIZE];
	int nums[MAX_NUMBERS];
	char *input_fn = "input.txt";
	char *output_fn = "output.txt";
    
	FILE *fi = fopen(input_fn, "r");
	
	fscanf(fi, "%[^\n]", inputString);
	
	fclose(fi);

	int size = ChekNumbersOnly(inputString, nums);
	sort_array(size, nums);

	FILE *fo = fopen(output_fn, "w");
	
	for (int i = 0; i < size; ++i)
	{
		fprintf(fo, "%d ", nums[i]);
	}

	fclose(fo);

	return 0;
}


