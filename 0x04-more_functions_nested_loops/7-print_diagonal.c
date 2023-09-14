#include "main.h"

/**
 * print_diagonal - print a diagonal line.
 * @n: length to print to.
 */
void print_diagonal(int n)
{
	int m, i;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}

	for (i = 0 ; i < n ; i++)
	{
		m = i;
		while (m > 0)
		{
			_putchar(32);
			m--;
		}
		_putchar('\\');
		_putchar('\n');
	}
}


