#include <stdio.h>
#include <limits.h>///пределы для целых типов
#include <float.h>//пределы для вещественных типов

// Задача 4. Сумма от 1 до N
// Составить функцию, которая определяет сумму всех чисел от 1 до N и
// привести пример ее использования.
// Пример №1
// Данные на входе: Одно целое положительное число N
// Данные на выходе: Целое число - сумма чисел от 1 до N
// Пример №2
// Данные на входе: 100
// Данные на выходе: 5050

int summ (int n)
{
  return (n * (n + 1)) / 2;
}

int main () {
int n;
printf("Enter number > 0 :\n");
scanf("%d", &n);
if (n <= 0) {
   printf ("Input INCORRECT"); 
   return 0;
}
printf ("%d", summ (n));
return 0;
}

// int main () {
// int n = 100, i = 0, summ = 0;
// printf ("%d\n", n);
// while (i < n)
// {
//     i ++;
//     summ += i;  
// }
// printf ("summ = %d, ", summ);
// return 0;
// }