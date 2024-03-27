// Задача 4. Какое время года
// Ввести номер месяца и вывести название времени года.
// Данные на входе: Целое число от 1 до 12 - номер месяца.
// Данные на выходе: Время года на английском: winter, spring, summer, autumn
// Пример №1
// Данные на входе: 4
// Данные на выходе: spring
// Пример №2 
// Данные на входе: 1
// Данные на выходе: winter

#include <stdio.h>
#include <limits.h>
#include <float.h>

int main(void){
int m;
	printf("enter the serial number of the current month: \n");
	scanf("%d", &m);
 m > 0 & m <= 12 ? printf("it's "): printf("the input is NOT correct !!");
		// m < 4 = 12 ? printf("winter now"):
		// m < 7 ? printf("spring now"):
		// m < 10 ? printf("sommer now"):
		// m < 12 ? printf("autumn now"):
		// printf("winter now");
	if (m < 3 || m == 12) 
		printf("winter now");
	else if (m < 6)
		printf("spring now");
	else if (m < 9)
		printf("sommer now");
	else if (m < 12)
		printf("autumn now");

 return 0;
}