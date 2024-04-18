#include <stdio.h>

// int strcmp (char*a, char* b)
// {
//         while (*a && *b && *a == *b)
//         {
//             a++, b++;
//             return *a - *b;
//         }

// }

// void Print (char *str, int res)
// {
//     printf(str, res ==0 ? "equal to": res < 0? "less": "great then" );
// }

// int main (int argc, char **argv)
// {
//     char *a = "abcde";
//     char *b = "xyz";
//     char *c= "abcd";
//     char *d = "xyz";
//     printf (" A = %s,\n B = %s,\n C = %s,\n D = %s\n", a, b, c, d);
//     Print ("A is %s B\n", strcmp(a, b));
//     Print ("A is %s C\n", strcmp(a, c));
//     Print ("A is %s D\n", strcmp(a, d));
//     Print ("C is %s D\n", strcmp(c, d));
//     Print ("B is %s C\n", strcmp(b, c));
//     Print ("D is %s B\n", strcmp(d, b));
//     return 0;
// }

// int main () {
// int m[3][3] =
// {
//     {1,2,3},
//     {4,5,6},
//     {7,8,9}
// };
// int *p1;
// int (*p2)[3] ;
// p1 = m;
// p2 = m ;
// p1++;
// p2++;

// printf ("%d, %d", *p1, **p2);

// }

// Цифры в строке
// Написать только одну функцию. Всю программу отправлять не надо. Вывести в
// порядке возрастания цифры, входящие в строку. Цифра - количество. Функция
// должно строго соответствовать прототипу:
// void print_digit(char s[])
// Данные на входе: Строка из английских букв, пробелов, знаков препинания и
// цифр
// Данные на выходе: Функция должна принмать на вход строку и выводить на печать
// по формату: Цифра пробел количество.
// Пример
// Данные на входе: Hello123 world77
// Данные на выходе: 1 1 2 1 3 1 7 2

// void PrintDigist(int arr[], int len)
// {
//     for (int i = 0; i < len; i++)
//         if (arr[i] > 0)
//             printf("%d %d\n", i, arr[i]);
// }
// void count_digits(char n[], int *res)
// {
//     for (int i = 0; n[i] != 0; i++)
//         if (n[i] >= '0' && n[i] <= '9')
//             res[n[i] - '0']++;
// }
// int Input(char arr[])
// {
//     int i = 0;
//     char inputSymbol = 0;
//     while (inputSymbol != '.')
//     {
//         scanf("%c", &inputSymbol);
//         arr[i++] = inputSymbol;
//     }
//     arr[i++] = 0;
//     return i;
// }
// int main()
// {
//     enum { BUFFER_SIZE = 100 };
//     char buffer[BUFFER_SIZE];
//     int r[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}; // scanf("%s", buffer);
//     Input(buffer);
//     count_digits(buffer, r);
//     PrintDigist(r, 10);
//     return 0;
// }

// Пропущенное число
// В последовательности записаны целые числа от M до N ( M меньше N, M больше или равно 1)в
// произвольном порядке, но одно из чисел пропущено (остальные встречаются ровно по одному
// разу). N не превосходит 1000. Последовательность заканчивается числом 0. Определить
// пропущенное число.
// Данные на входе: Последовательность целых чисел от M до N. M, N не превосходит 1000.
// Данные на выходе: Одно целое число
// Пример №1
// Данные на входе: 2 3 1 4 7 6 9 8 10 0
// Данные на выходе: 5
// Пример №2
// Данные на входе: 41 40 39 38 37 36 34 33 32 31 50 49 48 47 46 45 44 43 42 30 0
// Данные на выходе: 35

// const int max_input = 1000;
// int Input(int len, int arr[])
// {
//     int input;
//     int count = 0;
//     while (count < len)
//     {
//         scanf("%d", &input);
//         if (input == 0)
//             return count;
//         arr[count++] = input;
//     }
//     return count;
// }
// void bubble_sort(int *arr, int size)
// {
//     int buf;
//     for (int i = 0; i < size - 1; i++)
//         for (int j = i + 1; j < size; j++)
//             if (arr[i] > arr[j])
//             {
//                 buf = arr[i];
//                 arr[i] = arr[j];
//                 arr[j] = buf;
//             }
// }
// void PrintMiss(int len, int *in)
// {
//     for (int i = 1; i < len; i++)
//         if (in[i] != in[i - 1] + 1)
//         {
//             printf("%d", in[i - 1] + 1);
//             return;
//         }
// }
// int main()
// {
//     int arr[max_input];
//     int count = Input(max_input, arr);
//     bubble_sort(arr, count);
//     PrintMiss(count, arr);
//     return 0;
// }

// Демонстрация. Упаковать строку
// Дана строка состоящая из маленьких латинских букв 'a'..'z'. В конце строки точка. Необходимо
// заменить повторяющиеся буквы на <буква><количество повторений>
// Данные на входе: Входная строка состоящая из букв 'a'-'z' не превышающая 1000
// символов. В конце строки символ '.'
// Данные на выходе: Результат состоящий из букв и чисел, без пробелов
// Пример №1
// Данные на входе: aaaaabbbc.
// Данные на выходе: a5b3c1
// Пример №2
// Данные на входе: zzzzzzzzzzz.
// Данные на выходе: z11
// Пример №3
// Данные на входе: aaabbbbaa.
// Данные на выходе: a3b4a2

// #define SIZE 1000

// int Input(int len, char arr[])
// {
//     char input;
//     int count = 0;
//     while (count < len)
//     {
//         scanf("%c", &input);
//         if (input == '.')
//             return count;
//         arr[count++] = input;
//     }
//     return count;
// }
// void PrintSymbosCount(int len, char symbols[], int count[])
// {
//     for (int i = 0; i < len; i++)
//         printf("%c%d", symbols[i],
//                count[i]);
//     printf("\n");
// }

// int CountSymbols(int len, char arr[], char symbols[], int count[])
// {
//     int countSymbol = 1;
//     int outCount = 0;
//     int i;
//     for (i = 0; i < len - 1; i++)
//         if (arr[i] == arr[i + 1])
//             countSymbol++;
//         else
//         {
//             symbols[outCount] = arr[i];
//             count[outCount++] =
//                 countSymbol;
//             countSymbol = 1;
//         }
//     symbols[outCount] = arr[i];
//     count[outCount++] = countSymbol;
//     return outCount;
// }
// int main()
// {
//     char buf[SIZE], symbols[SIZE];
//     int count[SIZE];
//     int len = Input(SIZE, buf);
//     int lenCount = CountSymbols(len, buf, symbols, count);
//     PrintSymbosCount(lenCount, symbols, count);
//     return 0;
// }

// Сумма минимальна
// Дан целочисленный массив из 30 элементов. Элементы массива могут
// принимать произвольные целые значения помещающиеся в int. Необходимо
// создать функцию, которая находит и выводит в порядке возрастания номера
// двух элементов массива, сумма которых минимальна.
// Данные на входе: Последовательность из 30 целых чисел через пробел
// Данные на выходе: Два целых числа через пробел
// Пример
// Данные на входе: 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24
// 25 26 27 28 29 30
// Данные на выходе: 0 1

#include <limits.h>
int Input(int arr[], int n)
{
    int i;
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    return i;
}
void Print2Min(int min[])
{
    if (min[0] < min[1])
        printf("%d %d", min[0], min[1]);
    else
        printf("%d %d", min[1], min[0]);
    printf("\n");
}
void minSum(int size, int arr[], int min[])
{
    int sum = arr[0] + arr[1];
    min[0] = 0;
    min[1] = 1;
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] + arr[j] < sum)
            {
                sum = arr[i] + arr[j];
                min[0] = i; // n1=i;
                min[1] = j; // n2=j;
            }
        }
    }
}
int main(void)
{
    enum { BUFFER_SIZE = 30 };
    int buffer[BUFFER_SIZE];
    int min[2];
    Input(buffer, BUFFER_SIZE);
    minSum(BUFFER_SIZE, buffer, min);
    Print2Min(min);
    return 0;
}