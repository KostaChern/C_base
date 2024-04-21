#include <stdio.h>
#include <string.h>

// Задача 6. Заканчивается на a
// В файле .txt дано предложение. Необходимо определить, сколько слов
// заканчиваются на букву 'а'. Ответ записать в файл .txt.
// Данные на входе: Строка из английских букв и пробелов не более 1000
// символов.
// Данные на выходе: Одно целое число
// Пример
// Данные на входе: Mama mila ramu
// Данные на выходе: 2

const int MAX_LINE_SIZE = 1000;

int main()
{
	char *input_fn = "input.txt";
	char *output_fn = "output.txt";

	FILE *fi = fopen(input_fn, "r");

	char word[MAX_LINE_SIZE];

	int aaWords = 0;
	while (fscanf(fi, "%s", word) == 1)
	{
		int EndSymbl = strlen(word) - 1;
		if (word[EndSymbl] == 'a')
		{
			aaWords++;
		}
	}
	fclose(fi);

	FILE *fo = fopen(output_fn, "w");
	fprintf(fo, "%d", aaWords);
	fclose(fo);
}
