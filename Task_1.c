// Задача 1. По одному разу
// В файле .txt даны два слова не более 100 символов каждое, разделенные
// одним пробелом. Найдите только те символы слов, которые встречаются в
// обоих словах только один раз. Напечатайте их через пробел в файл .txt в
// лексикографическом порядке.
// Данные на входе: Два слова из маленьких английских букв через
// пробел. Длинна каждого слова не больше 100 символов.
// Данные на выходе: Маленькие английские буквы через пробел.
// Пример №1
// Данные на входе: hello world
// Данные на выходе: o
// Данные на входе: aabcd bcef
// Данные на выходе: b c

#include <stdio.h>
#include <string.h>

const int MAX_LINE_SIZE = 100;

void findOnceChars(char *input_fn, char *output_fn)
{
	char word1[MAX_LINE_SIZE];
	char word2[MAX_LINE_SIZE];

	FILE *fi = fopen(input_fn, "r");
	fscanf(fi, "%s %s", word1, word2);
	fclose(fi);

	int count1[26] = {0};
	int count2[26] = {0};
	int len1 = strlen(word1);
	int len2 = strlen(word2);

	for (int i = 0; i < len1; i++)
	{
		count1[word1[i] - 'a']++;
	}

	for (int i = 0; i < len2; i++)
	{
		count2[word2[i] - 'a']++;
	}

	FILE *f_out = fopen(output_fn, "w");
	for (int i = 0; i < 26; i++)
	{
		if (count1[i] == 1 && count2[i] == 1)
		{
			fprintf(f_out, "%c ", i + 'a');
		}
	}
	fclose(f_out);
}

int main()
{
	char *input_fn = "input.txt";
	char *output_fn = "output.txt";

	findOnceChars(input_fn, output_fn);

	return 0;
}
