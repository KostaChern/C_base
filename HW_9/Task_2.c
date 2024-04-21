#include <stdio.h>
#include <ctype.h>

// Задача 2. Заменить a на b
// В файле .txt дана символьная строка не более 1000 символов. Необходимо
// заменить все буквы "а" на буквы "b" и наоборот, как заглавные, так и
// строчные. Результат записать в .txt.
// Данные на входе: Строка из маленьких и больших английских букв,
// знаков препинания и пробелов.
// Данные на выходе: Строка из маленьких и больших английских
// букв, знаков препинания и пробелов.
// Пример
// Данные на входе: aabbccddABCD
// Данные на выходе: bbaaccddBACD
const int MAX_LINE_SIZE = 1000;

void changeLetters(char *input)
{
	while (*input)
	{
		if (*input == 'a')
		{
			*input = 'b';
		}
		else if (*input == 'b')
		{
			*input = 'a';
		}
		else if (*input == 'A')
		{
			*input = 'B';
		}
		else if (*input == 'B')
		{
			*input = 'A';
		}

		input++;
	}
}

int main()
{
	char *input_fn = "input.txt";
	char *output_fn = "output.txt";
	char inputString[MAX_LINE_SIZE];

	FILE *fi = fopen(input_fn, "r");
	fscanf(fi, "%[^\n]", inputString);
	fclose(fi);

	changeLetters(inputString);

	FILE *fo = fopen(output_fn, "w");
	fprintf(fo, "%s", inputString);

	fclose(fo);

	return 0;
}