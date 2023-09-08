#include <stdio.h>

/**
 * main - Entry point
 * char n:variable to store the alphabets
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
	putchar('\n');
	return (0);
}

