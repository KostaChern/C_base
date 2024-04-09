#include <stdio.h>
#include <limits.h>///пределы для целых типов
#include <float.h>//пределы для вещественных типов

// Задача 3. Количество 1
// Дано натуральное число N. Посчитать количество «1» в двоичной записи
// числа.
// Данные на входе: Натуральное число
// Данные на выходе: Целое число - количество единиц в двоичной записи
// числа.
// Пример №1
// Данные на входе: 5
// Данные на выходе: 2
// Пример №2
// Данные на входе: 255
// Данные на выходе: 8

int how_ones(int n);

int main()
{
    int num;

    printf("Enter a natural number: ");
    scanf("%d", &num);

    printf("number of '1' in binary code : %d", how_ones(num));

    return 0;
}

int how_ones(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else
    {
        return (n & 1) + how_ones(n >> 1);
    }
}