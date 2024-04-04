#include <stdio.h>
#include <limits.h>///пределы для целых типов
#include <float.h>//пределы для вещественных типов 

// Задача 3. Сумма цифр равна произведению
// Составить логическую функцию, которая определяет, верно ли, что в заданном
// числе сумма цифр равна произведению.
// int is_happy_number(int n)
// Данные на входе: Целое не отрицательное число
// Данные на выходе: YES или NO
// Пример №1
// Данные на входе: 123
// Данные на выходе: YES
// Пример №2
// Данные на входе: 528
// Данные на выходе: NO


enum happy_number {YES, NO};
enum happy_number is_happy_number(int num) {
int sum = 0, pr = 1;
while (num != 0) {
	pr *= num % 10;
	sum += num % 10;
	num /= 10;
}
if (sum == pr) {
    return YES; 
} else {
    return NO; 
}
}

int main() {
int num;
printf("Enter number > 0 :\n");
scanf("%d", &num);
if (num <= 0 ) {
   printf ("Input INCORRECT"); 
   return 0;
}
printf("%s", (is_happy_number(num) == YES) ? "YES" : "NO");
return 0;
}