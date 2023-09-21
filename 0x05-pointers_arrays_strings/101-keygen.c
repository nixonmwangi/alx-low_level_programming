#include "main.h"
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 *main - generates random valid passwords.
 *Return: 0.
 */

int main (void)
{
	int m;
	char c;

	srand(time(NULL));
	while (m <= 2645)
	{
		c = rand() % 128;
		m += c;
		putchar(c);
	}
	putchar(2772 - m);
	return (0);
}
