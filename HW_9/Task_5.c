#include <stdio.h>
#include <string.h>

// Задача 5. Самое длинное слово
// В файле .txt дана строка слов, разделенных пробелами. Найти самое длинное
// слово и вывести его в файл .txt. Случай, когда самых длинных слов может быть
// несколько, не обрабатывать.
// Данные на входе: Строка из английских букв и пробелов. Не более
// 1000 символов.
// Данные на выходе: Одно слово из английских букв.
// Пример
// Данные на входе: Hello beautiful world
// Данные на выходе: beautiful

const int MAX_LINE_SIZE = 1000;

void LongWord(char *input, char *bigtWord)
{
	char carrWord[MAX_LINE_SIZE];
	int maxLen = 0;
	int currLen = 0;
	int i = 0;

	while (input[i] != '\0')
	{
		if (input[i] != ' ')
		{
			carrWord[currLen] = input[i];
			currLen++;
		}
		else
		{
			carrWord[currLen] = '\0';
			if (currLen > maxLen)
			{
				maxLen = currLen;
				strcpy(bigtWord, carrWord);
			}
			currLen = 0;
		}
		i++;
	}

	carrWord[currLen] = '\0';

	if (currLen > maxLen)
	{
		maxLen = currLen;
		strcpy(bigtWord, carrWord);
	}
}

int main()
{
	char *input_arr = "input.txt";
	char *output_arr = "output.txt";

	FILE *fi = fopen(input_fn, "r");

	char inputString[MAX_LINE_SIZE];
	char bigWord[MAX_LINE_SIZE];

	fscanf(fi, "%[^\n]", inputString);
	LongWord(inputString, bigWord);
	fclose(fi);

	FILE *fo = fopen(output_fn, "w");
	fprintf(fo, "%s", bigWord);
	fclose(fo);

	return 0;
}


