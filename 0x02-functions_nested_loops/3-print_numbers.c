#include "main.h"

/**
 *print_numbers - print number 0 - 9.
 *@num: variable.
 */
void print_numbers(void)
{
	int num = 0;

	while (num < 10)
	{
		_putchar('0' + num);
		num++;
	}
	_putchar('\n');

}
