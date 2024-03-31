#include <stdio.h>
#include <limits.h>
#include <float.h>

// Задача 5. Все счастливые числа
// Ввести натуральное число и напечатать все числа от 10 до введенного числа -
// у которых сумма цифр равна произведению цифр
// Данные на входе: Одно натуральное число большее 10
// Данные на выходе: Числа у которых сумма цифр равна произведению
// цифр через пробел в порядке возрастания. Не превосходящие введенное
// число.
// Пример №1
// Данные на входе: 200
// Данные на выходе: 22 123 132
// Пример №2
// Данные на входе: 1000
// Данные на выходе: 22 123 132 213 231 312 321
// Пример №3
// Данные на входе: 22
// Данные на выходе: 22

int main() {
int a,
happyNumb = 0;
scanf("%d", &a);
	
if (a < 10){
	printf("INCORECTED input");
	return 0;
}
printf("happyNumb = ", a);
for (int i = 10; i <= a; i++) {
int pr = 1, sum = 0 , count = i;	
	while (count != 0) {
		pr *= count % 10;
		sum += count % 10;
		count /= 10;
	}
    	if (pr == sum) {
			printf("%d ", i);
    	    happyNumb++;
    	}
	}    
if (happyNumb == 0){
	printf("Nothing");
}
return 0;
}
  