#include <stdio.h>
#include <string.h> //объявление библиотеки обработки строк
#include <math.h>   //объявление математической библиотеки

//  Что будет напечатано? Поменяется ли
// результат если если *(++pb) = n+2;

// int main() {
// int a[5] = {1,2,3,4,5};
// int *pa = a+2, n=10,*pb = a+2 ;
// *pa++ = n+2;
// // *++pb = n+3;
// *(++pb) = n+2;
// printf("%d\n",*pa);
// printf("%d\n",*pb);
// printf("%d %d %d %d %d\n",a[0],a[1],a[2],a[3],a[4]);
// }

//  Два максимума
// Считать массив из 10 элементов и найти в нем два максимальных элемента и
// напечатать их сумму.
// Данные на входе: 10 целых чисел через пробел.
// Данные на выходе: Сумма двух максимальных элементов.
// Пример №1
// Данные на входе: 4 -5 3 10 -4 -6 8 -10 1 0
// Данные на выходе: 18
// Пример №2
// Данные на входе: 1 2 3 4 5 6 7 8 9 10
// Данные на выходе: 19

// int main()
// {
// int i, max, max2;
// int arr[10];
//  scanf("%d", &arr[0]);
//  max = 0;
//  max2 = 1;

// for (i = 1; i < 10; i++)
//  {
//  scanf("%d", &arr[i]);
//  if (arr[i] > arr[max])
//  {
//  max2 = max;
//  max = i;
//  }
//  else if (arr[i] > arr[max2])
//  max2 = i;
// }
//  printf("%d\n", arr[max] + arr[max2]);
//  return 0;
// }

// Максимум и минимум
// Считать массив из 10 элементов и найти в нем максимальный и минимальный элементы
// и их номера.
// Данные на входе: 10 целых чисел через пробел
// Данные на выходе: 4 целых числа через пробел: номер максимума, максимум, номер
// минимума, минимум.
// Пример №1
// Данные на входе: 4 -5 3 10 -4 -6 8 -10 1 0
// Данные на выходе: 4 10 8 -10
// Пример №2
// Данные на входе: 1 2 3 4 5 6 7 8 9 10
// Данные на выходе: 10 10 1 1

// int Input (int arr[], int n){
// int i;
//  for (i = 0; i < n; i++) //ввод массива
//  scanf ("%d", &arr[i]);
//  return i;
// }
// int Min (int arr[], int len){
// int min = arr[0], i;
//  for (i = 1; i < len; i++)
//  if (min > arr[i])
//  min = arr[i];
//  return min; //возврат результата
// }
// int Max (int arr[], int len){
// int max = arr[0], i;
//  for (i = 1; i < len; i++)
//  if (max < arr[i])
//  max = arr[i];
//  return max; //возврат результата
// }
// int PosMin (int *arr, int len)
// {
// int min = arr[0], i, p_m = 1;
//  for (i = 1; i < len; i++)
//  if (min > arr[i])
//  {
//  min = arr[i];
//  p_m = i + 1;
//  }
//  return p_m; //возврат результата
// }
// int PosMax (int *arr, int len) //описание функции PosMax
// {
// int max = arr[0], i, p_M = 1;
//  for (i = 1; i < len; i++)
//  if (max < arr[i])
//  {
//  max = arr[i];
//  p_M = i + 1;
//  }
//  return p_M; //возврат результата
// }

// int main (int argc, char **argv)
// {
// enum {BUFFER_SIZE = 10}; //указание количества элементов массива
// int buffer [BUFFER_SIZE]; //объявление массива
//  Input (buffer, BUFFER_SIZE); //вызов функции Input
//  printf ("%d ", PosMax (buffer, BUFFER_SIZE)); //вывод в консоль
//  printf ("%d ", Max (buffer, BUFFER_SIZE)); //вывод в консоль
//  printf ("%d ", PosMin (buffer, BUFFER_SIZE)); //вывод в консоль
//  printf ("%d ", Min (buffer, BUFFER_SIZE)); //вывод в консоль

//  return 0; //завершить программу успешно
// }

// Тут рациональное решение :

// int main() {

// int a[10];
// int max = 0, min = 0;
// for (int i = 0; i < 10; i++) {
//     scanf ("%d", &a[i]);
//     if (a[i] > a[max]) {
//         max = i;
//     }
//     if (a[i] < a[min]) {
//         min = i;
//     }
// }
// printf("number min %d => %d, number max %d => %d\n", min +1, a[min], max +1, a[max]);
// return 0;
// }

// Демонстрация. Инверсия половинок
// Считать массив из 10 элементов и выполнить инверсию отдельно для 1-ой и 2-ой
// половин массива. Необходимо изменить считанный массив и напечатать его
// одним циклом.
// Данные на входе: 10 целых элементов массива через пробел.
// Данные на выходе: 10 целых элементов массива через пробел.
// Пример №1
// Данные на входе: 4 -5 3 10 -4 -6 8 -10 1 0
// Данные на выходе: -4 10 3 -5 4 0 1 -10 8 -6
// Пример №2
// Данные на входе: 1 2 3 4 5 6 7 8 9 10
// Данные на выходе: 5 4 3 2 1 10 9 8 7 6

// void aPrint(int *arr, int len)
// {
//  for (int i = 0; i < len; i++)
//  printf("%d ",arr[i]);;
// }
// void reverseArray(int * array, int
// num)
// {
//  for ( int i = 0, j = num - 1; i < j; i++, j--)
//  {
//  int t = array[i];
//  array[i] = array[j];
//  array[j] = t;
//  }
// }
// int main()
// {
// enum {aSize = 10};
// int array[aSize] = {0};
//  for(int i=0; i < aSize; i++)
//  scanf("%d", &array[i]);
//  reverseArray(array, aSize/2);
//  reverseArray(&array[aSize/2], aSize/2);
//  aPrint(array, aSize);
//  return 0;
// }

// Демонстрация. Более одного раза
// Считать массив из 10 элементов и выделить в другой массив все числа, которые встречаются более
// одного раза. В результирующем массиве эти числа не должны повторяться.
// Данные на входе: 10 целых чисел через пробел
// Данные на выходе: Целые числа через пробел, которые встречаются более одного раза в
// исходном массиве.
// Пример №1
// Данные на входе: 4 1 2 1 11 2 34 8 9 10
// Данные на выходе: 1 2
// Пример №2
// Данные на входе: 1 2 3 4 5 1 2 3 4 5
// Данные на выходе: 1 2 3 4 5
// Пример №3
// Данные на входе: 1 1 1 1 1 1 1 1 1 1
// Данные на выходе: 1

// const int SIZE = 10;
// void Print(int *arr, int len)
// {
//     for (int i = 0; i < len; i++)
//         printf("%d ", arr[i]);
// }
// int Input(int arr[], int n)
// {
//     int i;
//     for (i = 0; i < n; i++)
//         scanf("%d", &arr[i]);
//     return i;
// }
// int selection(int in[], int out[], int len)
// {
//     int count = 0;
//     int flag = 1;
//     for (int i = 0; i < len; i++)
//         for (int j = i + 1; j < len; j++)
//             if (in[i] == in[j])
//             {
//                 for (int k = 0; k < count; k++)
//                 {
//                     if (out[k] == in[i])
//                     {
//                         flag = 0;
//                         break;
//                     }
//                     else
//                         flag = 1;
//                 }
//                 if (flag == 1)
//                     out[count++] = in[i]; // flag = 0;
//             }
//     return count;
// }

// int main()
// {
//     enum
//     {
//         SIZE = 10
//     };
//     int in[SIZE];
//     int out[SIZE];
//     Input(in, SIZE);
//     int count = selection(in, out, SIZE);
//     Print(out, count);
//     return 0;
// }

// Положительные и отрицательные
// Считать 10 чисел в диапазоне от -500 до 500 и разложить по двум массивам: в
// одни помещать только положительные, во второй - только отрицательные. Числа,
// равные нулю, игнорировать. Вывести на экран все элементы обоих массивов.
// Данные на входе: 10 целых чисел через пробел.
// Данные на выходе: Сперва положительные числа, потом отрицательыне
// числа, через пробел.
// Пример
// Данные на входе: 5 -4 0 1 4 -3 -3 3 0 2
// Данные на выходе: 5 1 4 3 2 -4 -3 -3

// int Input(int arr[], int n)
// {
//     int i;
//     for (i = 0; i < n; i++)
//         scanf("%d", &arr[i]);
//     return i;
// }
// void Print(int *arr, int len)
// {
//     for (int i = 0; i < len; i++)
//         printf("%d ", arr[i]);
//     ;
// }

// void sortPrint(int in[], int len)
// {
//     int countP = 0;
//     int countN = 0;
//     int pos[len], neg[len];
//     for (int i = 0; i < len; i++)
//         if (in[i] > 0)
//             pos[countP++] = in[i];
//         else if (in[i] < 0)
//             neg[countN++] = in[i];

//     Print(pos, countP);
//     Print(neg, countN);
// }
// int main()
// {
//     enum { SIZE = 10 };
//     int in[SIZE];
//     Input(in, SIZE);
//     sortPrint(in, SIZE);
//     return 0;
// }

// Цифры по порядку
// Вывести в порядке следования цифры, входящие в десятичную запись
// натурального числа N.
// Данные на входе: Одно натуральное число N
// Данные на выходе: Цифры через пробел
// Пример
// Данные на входе: 54412
// Данные на выходе: 5 4 4 1 2

// void Print(int *arr, int len)
// {
//     for (int i = 0; i < len; i++)
//         printf("%d ", arr[i]);
//     ;
// }
// int Digits(int N, int out[])
// {
//     int i = 0, r;
//     while (N != 0)
//     {
//         r = N % 10;
//         out[i] = r;
//         i++;
//         N = N / 10;
//     }
//     return i;
// }
// void reverseArray (int *array, int num)
// {
//     for (int i = 0, j = num - 1; i < j; i++, j--)
//     {
//         int t = array[i];
//         array[i] = array[j];
//         array[j] = t;
//     }
// }
// int main()
// {
//     enum { MAX = 10 };
//     int N;
//     int DigitsArr [MAX];
//     scanf("%d", &N);
//     int count = Digits (N, DigitsArr);
//     reverseArray (DigitsArr, count);
//     Print(DigitsArr, count);
//     return 0;
// }

// Переставить цифры
// Переставить цифры в числе так, чтобы получилось максимальное число
// Данные на входе: Одно целое не отрицательное число
// Данные на выходе: Целое неотрицательное число
// Пример №1
// Данные на входе: 1229
// Данные на выходе: 9221
// Пример №2
// Данные на входе: 19

int Digits(int N, int out[])
{
    int i = 0;
    int j, r;
    while (N != 0)
    {
        r = N % 10;
        out[i] = r;
        i++;
        N = N / 10;
    }
    return i;
}
void bubble_sort(int *arr, int size)
{
    int buf;
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = i + 1; j < size; j++)            
        {
            if (arr[i] > arr[j])
            {
                buf = arr[i];
                arr[i] = arr[j];
                arr[j] = buf;
            }
        }
    }
}
void PrintNoSpace(int *arr, int len)
{
    for (int i = 0; i < len; i++)
        printf("%d", arr[i]);
}
void reverseArray(int *array, int num)
{
    for (int i = 0, j = num - 1; i < j;  i++, j--)                                    
    {
        int t = array[i];
        array[i] = array[j];
        array[j] = t;
    }
}
int main()
{
    enum { MAX = 10 };
    int n;
    int arr[MAX];
    scanf("%d", &n);
    int size = Digits(n, arr);
    bubble_sort(arr, size);
    reverseArray(arr, size);
    PrintNoSpace(arr, size);
    return 0;
}