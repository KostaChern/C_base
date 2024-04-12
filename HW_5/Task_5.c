#include <stdio.h>
#include <string.h> //объявление библиотеки обработки строк
#include <math.h>   //объявление математической библиотеки

// Задача 5. Вторая с конца ноль
// Считать массив из 10 элементов и отобрать в другой массив все числа, у
// которых вторая с конца цифра (число десятков) – ноль.
// Данные на входе: 10 целых чисел через пробел.
// Данные на выходе: Целые числа через пробел, у которых вторая с конца
// цифра - ноль
// Пример
// Данные на входе: 40 105 203 1 14 1000 22 33 44 55
// Данные на выходе: 105 203 1 1000

int Input(int arr[], int n);
void Sort_By_Null(int arr[], int n);

int main()
{
    enum
    {
        SIZE = 10
    };
    int arr[SIZE];

    printf("Enter 10 integers: \n");
    Input(arr, SIZE);
    Sort_By_Null(arr, SIZE);

    return 0;
}

int Input(int arr[], int n)
{
    int i;
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    return i;
}

void Sort_By_Null(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int num = arr[i] / 10;
        if (num > 9 && num % 10 == 0)   //если не отсечь num > 9 => то в ответ будут попадать 1!
            printf("%d ", arr[i]);
    }
}