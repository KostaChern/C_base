#include <stdio.h>
#include <limits.h>///пределы для целых типов
#include <float.h>//пределы для вещественных типов 

// Задача 2. НОД
// Составить функцию, которая определяет наибольший общий делитель двух
// натуральных и привести пример ее использования
// https://younglinux.info/algorithm/euclidean
// int nod(int a, int b)
// Данные на входе: Два целых положительных числа
// Данные на выходе: Одно целое число - наибольший общий делитель.
// Пример №1
// Данные на входе: 14 21
// Данные на выходе: 7


int nod (int a, int b) {
    while (a != 0 && b != 0) {
        if (a > b) {
            a = a % b;
        } else {
            b = b % a;
        }
    }
    return a + b;
}

int main () {
int a, b;
printf ("Input two numbers > 0: \n");
scanf ("%d%d", &a, &b);
if (a <= 0 || b <= 0) {
   printf ("Input INCORRECT"); 
   return 0;
}
printf("%d", nod(a, b));  
return 0;
}


