// Задача 3. В порядке возрастания
// Ввести три числа и определить, верно ли, что они вводились в порядке 
// возрастания.
// Данные на входе: Три целых числа
// Данные на выходе: Одно слово YES или NO
// Пример
// Данные на входе: 4 5 17
// Данные на выходе: YES

#include <stdio.h>
#include <limits.h>
#include <float.h>

int main(void){
int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	a > b ? printf("NO\n") : b > c ? printf("NO\n") : printf("YES\n");

 return 0;
}