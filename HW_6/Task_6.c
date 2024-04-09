#include <stdio.h>
#include <limits.h>///пределы для целых типов
#include <float.h>//пределы для вещественных типов

// Задача 6. Возвести в степень
// Написать рекурсивную функцию возведения целого числа n в степень p.
// int exponentiation(int n, int p)
// Используя данную функцию, решить задачу.
// Данные на входе: Два целых числа -100 >= n >= 100 и 0 >= p >= 100
// Данные на выходе: Одно целое число n в степени p
// Пример №1
// Данные на входе: 2 3
// Данные на выходе: 8
// Пример №2
// Данные на входе: 3 4
// Данные на выходе: 81

int exponentiation (int n, int p);

int main()
{
	int base, exponent;
	printf("Enter a base and exponent: ");
	scanf("%d%d", &base, &exponent);
    if (base >= 100 || base <= -100 || exponent >= 100 || exponent  <= -100) {
        printf ("INCORRECT ENTRY !!!");
        return 0;
    }
	int result = exponentiation(base, exponent);
	printf("Result = %d\n", result);
	return 0;
}

int exponentiation(int n, int p)
{
	if (p == 0)
	{
		return 1;
	}
	return n * exponentiation(n, p - 1);
}