#include <stdio.h>

/**
 * main - Entry point
 * char n : variable storing alphabets
 *
 * Return: Always 0 (Sucess)
 */

int main(void)
{
	char n;

	for (n = 'a' ; n <= 'z' ; n++)
	{
		putchar(n);

	}

	for (n = 'A' ; n <= 'Z' ; n++)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}

