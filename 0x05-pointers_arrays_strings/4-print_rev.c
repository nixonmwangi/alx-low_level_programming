#include "main.h"

/**
 *print_rev - prints a string, in reverse, followed by a new line.
 *@s: string.
 *
 */
void print_rev(char *s)
{
	int len = 0;
	int l;

	for (l = 0; s[l] != '\0'; l++)
	{
		len++;
	}
	for (l = len - 1; l >= 0; l--)
	{
		_putchar(s[l]);
	}
	_putchar('\n');
}
