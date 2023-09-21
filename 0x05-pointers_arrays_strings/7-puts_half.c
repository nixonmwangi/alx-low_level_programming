#include "main.h"

/**
 *puts_half - prints half of a string, followed by a new line.
 *@str: string to be processed.
 *
 */
void puts_half(char *str)
{
	int m;
	int n;
	int count = 0;

	for (m = 0; str[m] != '\0'; m++)
		count++;
	n = (count - 1) / 2;
	for (m = n + 1; str[m] != '\0'; m++)
	{
		_putchar(str[m]);
	}
	_putchar('\n');
}
