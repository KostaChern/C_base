#include <stdio.h>
#include <limits.h>///пределы для целых типов
#include <float.h>//пределы для вещественных типов

// Задача 5. Сколько раз встречается символ a
// Дана строка из английских символов, пробелов и знаков препинания. В конце
// строки символ точка. Необходимо реализовать рекурсивную функцию,
// которая считывает данную строку со стандартного потока ввода и возвращает
// целое число – количество символов 'a' в данной строке.
// int acounter(void)
// Используя данную функцию решить задачу.
// Данные на входе: Строка состоящая из английских букв, пробелов и
// знаков препинания. В конце строки символ '.'
// Данные на выходе: Одно целое число.
// Пример №1
// Данные на входе: abcd a.
// Данные на выходе: 2
// Пример №2
// Данные на входе: Hello world.
// Данные на выходе: 0

int search_a();


int main()
{
	printf("Enter a string ending with '.':\n");
	int count = search_a();
	printf("Result = %d\n", count);
	return 0;
}

int search_a()
{
	char c;
	scanf("%c", &c);
	if (c == '.')
	{
		return 0;
	}
	return (c == 'a') + search_a();
}