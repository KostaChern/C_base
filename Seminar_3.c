#include <stdio.h>
#include <limits.h>///пределы для целых типов
#include <float.h>//пределы для вещественных типов 

int main(void){

	// printf("+---------------------------------------------------------------------+\n");
	// printf("| Type | Byte(s) | | |\n");
	// printf("| \\of memory/ Min| Max|\n");
	// printf("| \\ / | |\n");
	// printf("+------------------+-+------------------------+-----------------------+\n");
	// printf("|%18s|%d| %"PRId8"| %"PRId8"|\n","int8_t",
	// sizeof(int8_t),INT8_MIN,INT8_MAX);
	// printf("|%18s|%d| %"PRIu8"| %"PRIu8"|\n","uint8_t",
	// sizeof(uint8_t),0,UINT8_MAX);
	// printf("|%18s|%d| %"PRId16"| %"PRId16"|\n","int16_t",
	// sizeof(int16_t),INT16_MIN,INT16_MAX);
	// printf("|%18s|%d| %"PRIu16"| %"PRIu16"|\n","uint16_t",
	// sizeof(uint16_t),0,UINT16_MAX);
	// printf("|%18s|%d| %"PRId32"| %"PRId32"|\n","int32_t",
	// sizeof(int32_t),INT32_MIN,INT32_MAX);
	// printf("|%18s|%d| %"PRIu32"| %"PRIu32"|\n","uint32_t",
	// sizeof(uint32_t),0, UINT32_MAX);
	// printf("|%18s|%d| %"PRId64"| %"PRId64"|\n","int64_t",
	// sizeof(int64_t),INT64_MIN,INT64_MAX);
	// printf("|%18s|%d| %"PRIu64"| %"PRIu64"|\n","uint64_t",
	// sizeof(uint64_t),0LLU,UINT64_MAX);//0LLU — литерал обозначающий беззнаковое целое типа unsigned long long

	// int a, b;
	// 	scanf("%d%d", &a, &b);
	// 	if (a >= b)
	// 		printf("%d %d\n", b, a);
	// 	else
	// 		printf("%d %d\n", a , b);


// int a, b, max, min;
// 	scanf("%d%d", &a, &b);
// 	max = a > b ? a : b;//всего две строки кода!
// 	min = a < b ? a : b;//всего две строки кода!
// 	printf("%d %d",max,min);


// int a, b;
// 	scanf("%d%d", &a, &b); //можно и в одну строку кода!
// 	printf("%d %d", a < b ? a : b, a > b ? a : b);

// int a,b,c;
// 	scanf("%d%d%d",&a,&b,&c);
	// if(a > b)
	// 	max = a;
	// else 
	// 	max = b;
	// if(max < c)
	// 	max = c;
	
	// int max = a > b ? a : b; // всего две строки кода!
	// max = max > c ? max : c; // вместо 6!!!

	// printf("%d",max);


	// int n;
	// scanf ("%d", &n);
	// int n2 = n / 100 % 10;//В С99 можно так
	// int n1 = n / 10 % 10;
	// int n0 = n % 10;
	// int max = n2 > n1 ? n2 : n1;
	// max = max > n0 ? max : n0;
	// printf("%d",max);

// Найти сумму максимума и минимума
// Напечатать сумму максимума и минимума.
// Данные на входе: Пять целых чисел через пробел
// Данные на выходе: Одно целое число - сумма максимума и минимума
// Пример 
// Данные на входе: 4 15 9 56 4
// Данные на выходе: 60	

// int a,b,c,d,e;
// scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
// int min = a<b ? a : b;
// 	min = min<c ? min : c;
// 	min = min<d ? min : d;
// 	min = min<e ? min : e;
// int max = a>b ? a : b;
// 	max = max>c ? max : c;
// 	max = max>d ? max : d;
// 	max = max>e ? max : e;
//  printf("%d",max+min);
 
//  Уравнение прямой по координатам двух точек
// Определить уравнение прямой по координатам двух точек. Уравнение вида 
// y=k*x+b
// Данные на входе: Четыре целых числа через пробел. Координаты X1
//  Y1
//  X2
//  Y2
// Данные на выходе: Два числа k,b в формате "%.2f %.2f"
// Пример №1
// Данные на входе: 6 9 -1 3
// Данные на выходе: 0.86 3.86
// Пример №2 
// Данные на входе: 1 2 3 4
// Данные на выходе: 1.00 1.00


	int x1, y1, x2, y2;
	float k,b;
	scanf("%d%d%d%d", &x1, &y1, &x2, &y2);
	k = (float)(y1 - y2) / (x1 - x2);
	b = y2 - k * x2;
	printf("%.2f %.2f", k, b);


	 return 0;
}