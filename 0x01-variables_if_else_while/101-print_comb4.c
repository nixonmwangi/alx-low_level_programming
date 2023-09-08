#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Succes)
 */

int main(void)
{
	int n;
	int m;
	int o;

	for (o = 0 ; o != 8 ; o++)
	{
		for (n = o + 1 ; n != 9 ; n++)
		{
			m = n + 1;
			do {
				putchar('0' + o);
				putchar('0' + n);
				putchar('0' + m);
				if (o != 7)
				{
					putchar(',');
					putchar(32);
				}
				m++;
			} while (m != 10);
		}
	}
	putchar('\n');
	return (0);
}

