#include <stdio.h>
#include <limits.h>///пределы для целых типов
#include <float.h>//пределы для вещественных типов 

int main(void){
//  int x = 12;
//  printf("%#09x\n", x); 
//  printf("%+09d\n", x);
//  printf("%9.3f\n", (float)x);

// Напечатать таблицу с допустимыми значениями типов
// Задание 1
// +---------------------------------------------------------------------+
// | Type | Byte(s) | | |
// | \of memory/ Min| Max|
// | \ / | |
// +------------------+-+------------------------+-----------------------+
// | char|1| -128| 127|
// | unsigned char|1| 0| 255|
// | short|2| -32768| 32767|
// | unsigned short|2| 0| 65535|
// | long|4| 2147483648| 2147483647|
// | unsigned long|4| 0| 4294967295|
// | long long|8| -9223372036854775808| 9223372036854775807|
// |unsigned long long|8| 0| 18446744073709551615|
// | float |4| -3,4028235E+38| 3,4028235E+38|
// | double |8|-1,7976931348623157E+308|1,7976931348623157E+308

// int a, b, c; //Объявить переменные
// printf("Input number:\n"); //Вывести на экран подсказку
// scanf ("%d%d", &a, &b); //Считать два целых числа и записать их по адресу
// c = a + b; //Сложить два числа и поместить сумму в c
// printf("%d2", c);//Вывести на экран значение в переменной c
// return 0; //Завершить программу успешно
   
	// printf("+------------------------------------------------------------------------------+\n");
	// printf("|         Type       | Byte(s) |                       |                       |\n");
	// printf("|      \\of memory/                      Min            |        Max            |\n");
	// printf("|      \\        /                                      |                       |\n");
	// printf("+--------------------+----- --+------------------------+-----------------------+\n");
	// printf("|%18s  |%d       |%24d|%23d|\n", "char", sizeof(char), CHAR_MIN, CHAR_MAX);
	// printf("|%18s  |%d       |%24d|%23d|\n", "short", sizeof(short), SHRT_MIN, SHRT_MAX);
	// printf("|%18s  |%d       |%24d|%23d|\n", "unsigned short", sizeof(unsigned short), 0, USHRT_MAX);
	// printf("|%18s  |%d       |%24ld|%23ld|\n", "long", sizeof(long), LONG_MIN, LONG_MAX);
	// printf("|%18s  |%d       |%24u|%23lu|\n", "unsigned long", sizeof(unsigned long), 0 ,ULONG_MAX);
	// printf("|%18s  |%d       |%24lld|%23lld|\n", "long long", sizeof(long long), LLONG_MIN, LLONG_MAX);
	// printf("|%18s  |%d       |%24d|%23llu|\n", "unsigned long long", sizeof(unsigned long
	// long),0,ULLONG_MAX);
	// printf("|%18s  |%d       |%24e|%23e|\n", "float", sizeof(float), -FLT_MAX, FLT_MAX);    //FLT_MIN -будет наименьшее к 0 число
	// printf("|%18s  |%d       |%24.16E|%23.16E|\n", "double", sizeof(double), DBL_MIN, DBL_MAX);
	
// Демонстрация. Сумма арифметической прогрессии
// На вход подается первый член арифметической прогрессии, шаг прогрессии и 
// количество элементов 
// Нужно напечатать сумму первых n членов арифметической прогрессии, которая 
// вычисляется по формуле
// Sn = (2a1 + d(n - 1)) ⋅ n / 2, где a1 — первый член арифметической прогрессии, 
// d — шаг прогрессии, n — количество элементов
 
// Пример №1: 
// Данные на входе: 1 3 3
// Данные на выходе: 12
 
// Пример №2: 
// Данные на входе: 1 3 -5
// Данные на выходе: -12

	// int a1, n, d;
	// scanf("%d%d%d", &a1, &n, &d);
	// int sum = (2 * a1 + (n - 1) * d) * n / 2;
	// printf("%d\n", sum);

	// int a, n, d;
	// scanf("%d%d%d", &a, &n, &d);
	// float s = (a + n + d) / 3.f;
	// printf("%.2f\n", s);

	int x;
	scanf("%d", &x);
	printf("%d", (x / 100) * ((x % 100) / 10) * (x % 10));


	return 0;
}