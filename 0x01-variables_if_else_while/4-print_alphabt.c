#include <stdio.h>

/**
 * main - Entry point
 * char n: variable stroing the alphabets
 * Return: Always 0 (Sucess)
 */

int main(void)
{
	char n;

	for (n = 'a' ; n <= 'z' ; n++)
	{
		if ((n == 'q' || n == 'e') != 1)
		{
			putchar(n);
		}

	}
	putchar('\n');
	return (0);
}

