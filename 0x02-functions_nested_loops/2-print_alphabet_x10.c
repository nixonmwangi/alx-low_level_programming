#include "main.h"
/**
  * print_alphabet_x10 - repeats the print_alphabet 10 times.
  */
void print_alphabet_x10(void)
{
	int m;
	char alph;

	for (m = 0; m < 10; m++)
	{
		for (alph = 'a'; alph <= 'z'; alph++)
		{
			_putchar(alph);
		}
		_putchar('\n');
	}
}
