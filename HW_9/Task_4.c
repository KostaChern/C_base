#include <stdio.h>
#include <string.h>

// Задача 4. Удалить повторяющиеся символы
// В файле .txt строка из маленьких и больших английских букв, знаков
// препинания и пробелов. Требуется удалить из нее повторяющиеся символы и
// все пробелы. Результат записать в файл .txt.
// Данные на входе: Строка из маленьких и больших английских букв,
// знаков препинания и пробелов. Размер строки не более 1000 символов.
// Данные на выходе: Строка из маленьких и больших английских
// букв.
// Пример
// Данные на входе: abc cde def
// Данные на выходе: abcdef
const int MAX_LINE_SIZE = 1000;
void delDuplics(char *inputString)
{
	int index = 0;
	int len = strlen(inputString);
	int used[256] = {0};

	for (int i = 0; i < len; i++)
	{
		int codeChar = inputString[i];
		if (inputString[i] != ' ' && used[codeChar] == 0)
		{
			used[codeChar] = 1;
			inputString[index++] = inputString[i];
		}
	}
	inputString[index] = '\0';
}

int main()
{

	char *input_fn = "input.txt";
	char *output_fn = "output.txt";

	FILE *fi = fopen(input_fn, "r");

	char inputString[MAX_LINE_SIZE];

	fscanf(fi, "%[^\n]", inputString);
	delDuplics(inputString);
	fclose(fi);

	FILE *fo = fopen(output_fn, "w");
	fprintf(fo, "%s", inputString);
	fclose(fo);

	return 0;
}