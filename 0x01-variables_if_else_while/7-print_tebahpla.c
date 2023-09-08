#include <stdio.h>

/**
 * main - Entry point
 * char n: variable
 * Return: Always 0 (Sucess)
 */

int main(void)
{
	char n;

	for (n = 'z' ; n >= 'a' ; n--)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}

