#include <stdio.h>
#include <limits.h>///пределы для целых типов
#include <float.h>//пределы для вещественных типов 

//вводися 2 числа: 1 -больше, 2-е - меньшее
// распечатать кубы от большего к меньшему

// int main(void){

// int i, a, b;
// scanf("%d%d", &a, &b);
// for( int i = a; i <= b; b--) {

// 	printf("%d\n", b*b*b);

// }


// Демонстрация. Две одинаковые цифры
// int main(){
// int a, other_nums, num;
// scanf("%d", &a); // 123423
// if (a < 0) {
// 	a *= -1;
// }
// while (a > 0)
// {
// 	num = a % 10; // 3, 
// 	other_nums = a / 10; // 12342, 
// 	while (other_nums > 0)
// 	{
// 		if (num == other_nums % 10)  // 3 == 2 ? 
// 		{
// 		printf("YES\n");
// 		return 0;
// 		}
//  		other_nums /= 10; // 1234, 
//  	}
// 	a /= 10; //12342,  
// }
// printf("NO\n");

// return 0;
// }


// Две стоящие цифры рядом
// int main(){
// int a, other_nums, num;
// scanf("%d", &a); 
// if (a < 0)
// {
// 	a *= -1;
// }
// while (a > 0)
// {
// 	num = a % 10;
// 	other_nums = a / 10;
// 	other_nums = other_nums % 10;
// 		if (num == other_nums)
// 		{	printf("YES");
// 			return 0;
// 		}	
// 	a /= 10;
// }
// rintf("NO");
// return 0;
// }


// Посчитать числа
// Дана последовательность ненулевых целых чисел, в конце последовательности число 0. 
// Подсчитать количество чисел. 
// Данные на входе: Целые ненулевые числа. В конце последовательности ноль. Ноль 
// в последовательность не входит. 
// Данные на выходе: Одно целое число - количество чисел в последовательности. 
// Пример №1
// Данные на входе: 15 22 2 4 1 6 0 
// Данные на выходе: 6 
// Пример №2
// Данные на входе: 27 1 3 7 0 
// Данные на выходе: 4

int main(void)
{
unsigned int a, count = 0;
 	do
 	{
 		scanf("%d", &a);
 		count ++;
 	} while (a !=0);
 	printf("%d", count - 1);
 	return 0;
}