#include "main.h"

/**
 *print_most_numbers - prints digits from 0 to 9..
 *@num: variable.
 */
void print_most_numbers(void)
{
	int num;

	for (num = 48; num < 58; num++)
	{
		if (num != 50 && num != 52)
		{
			_putchar(num);
		}
	}
	_putchar('\n');
}
