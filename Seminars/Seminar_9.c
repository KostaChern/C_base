#include <stdio.h>
#include <string.h> //объявление библиотеки обработки строк
#include <math.h>   //объявление математической библиотеки

// Последний номер символа
// В файле .txt дана строка из 1000 символов. Показать номера символов, совпадающих с
// последним символом строки. Результат записать в файл .txt
// Данные на входе: Строка не более 1000 символов
// Данные на выходе: Целые числа через пробел - номера символа, который совпадает с
// последним символом строки.
// Пример
// Данные на входе: aabbcdb
// Данные на выходе: 2 3

// #define MAXELEMENTS 1000

// void input(char *string)
// {
//     FILE *in;
//     in = fopen("input.txt", "r");
//     while (fscanf(in, "%[^\n]", string) == 1);
//         fclose(in);
// }

// void output(char *str)
// {
//     FILE *out;
//     out = fopen("output.txt", "w");
//     int len = strlen(str) - 1;
//     for (int i = 0; i < len; i++)
//         if (str[i] == str[len])
//             fprintf(out, "%d ", i);

//     fclose(out);
// }
// int main(int argc, char **argv)
// {
//     char stringFile[MAXELEMENTS];
//     input(stringFile);
//     output(stringFile);
//     return 0;
// }

// Демонстрация. Проверка на палиндром
// В файле .txt символьная строка не более 1000 символов. Необходимо проверить,
// является ли она палиндромом (палиндром читается одинаково в обоих направлениях).
// Реализовать логическую функцию is_palindrom(str) и записать ответ в файл .txt.
// Данные на входе: Строка из заглавных английских букв
// Данные на выходе: YES или NO
// Пример №1
// Данные на входе: ABCDEF
// Данные на выходе: NO
// Пример №2
// Данные на входе: KAZAK
// Данные на выходе: YES

// const int line_width = 1024;
// int is_palindrome(char *line)
// {
//     int len = strlen(line)-1;
//     for (int i = 0; i < len / 2; i++)
//         if (line[i] != line[len - i])
//             return 1;
//     return 0;
// }
// int main(void)
// {
//     char *input_fn = "input.txt";
//     char *output_fn = "output.txt";
//     char line[line_width];
//     FILE *fp;
//     fp = fopen(input_fn, "r");
//     fscanf(fp, "%[^\n]", line);
//     fclose(fp);
//     fp = fopen(output_fn, "w");
//     printf(fp, "%s", is_palindrome(line) ? "YES" : "NO");
//     fclose(fp);
//     return 0;
// }

// Количество букв
// В файле .txt считать символьную строку, не более 10 000 символов. Посчитать
// количество строчных (маленьких) и прописных (больших) букв в введенной строке.
// Учитывать только английские буквы. Результат записать в файл .txt.
// Данные на входе: Строка состоящая из английских букв, цифр, пробелов и
// знаков препинания.
// Данные на выходе: Два целых числа. Количество строчных букв и количество
// заглавных букв.
// Пример №1
// Данные на входе: aabbAB
// Данные на выходе: 4 2
// Пример №2
// Данные на входе: HELLO WORLD
// Данные на выходе: 0 10

// #define SIZE 10001
// void input (char *strIn)
// {
//     FILE *in;
//     in = fopen("input.txt", "r");
//     while (fscanf(in, "%[^\n]", strIn) == 1);
//     fclose(in);
// }
// int uppercaseCount (char *strUp)
// {
//     int sumUp = 0;
//     for (int i = 0; i < strlen(strUp); i++)
//         if (strUp[i] >= 'A' && strUp[i] <= 'Z')
//             sumUp++;
//     return sumUp;
// }

// int lowercaseCount (char *strLow)
// {
//     int sumLow = 0;
//     for (int i = 0; i < strlen(strLow); i++)
//         if (strLow[i] >= 'a' && strLow[i] <= 'z')
//             sumLow++;
//     return sumLow;
// }
// void output (int countLow, int countUp)
// {
//     FILE *out;
//     out = fopen("output.txt", "w");
//     fprintf(out, "%d %d", countLow, countUp);
//     fclose(out);
// }
// int main (int argc, char **argv)
// {
//     char str[SIZE];
//     input(str); // uppercaseCount(str);
//     output(lowercaseCount(str), uppercaseCount(str));
//     return 0;
// }

// Демонстрация. Cao заменить на Ling
// В файле .txt дано предложение. Необходимо заменить все имена «Cao» на «Ling» и
// записать результат в файл .txt.
// Данные на входе: Строка из английский букв, знаков препинания и пробелов.
// Не более 1000 символов.
// Данные на выходе: Строка из английский букв, знаков препинания и пробелов.
// Пример
// Данные на входе: Cao, Cao, Cao and Cao!!!
// Данные на выходе: Ling, Ling, Ling and Ling!!!

#define SIZE 10001

void input(char *strIn)
{
    FILE *in;
    in = fopen("input.txt", "r");
    while (fscanf(in, "%[^\n]", strIn) == 1);
    fclose(in);
}
void changeName(char *strExt, char *buffer)
{
    int count = 0;
    for (int i = 0; i < strlen(strExt);)
    {
        if (!memcmp(strExt + i, "Cao", 3))
        {
            strcat(buffer, "Ling");
            count += 4;
            i += 3;
            continue;
        }
        buffer[count++] = strExt[i++];
    }
}

void output(char *strOut)
{
    FILE *out;
    out = fopen("output.txt", "w");
    fprintf(out, "%s", strOut);
    fclose(out);
}
int main(int argc, char **argv)
{
    char str[SIZE] = {0}, strFinal[SIZE] = {0};
    input(str);
    changeName(str, strFinal);
    output(strFinal);
    return 0;
}