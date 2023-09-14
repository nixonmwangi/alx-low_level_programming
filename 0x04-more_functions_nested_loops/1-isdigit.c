#include "main.h"

/**
 * _isdigit - checks whether the digit is between 0-9.
 *@c: variable to be checked.
 *Return: 1 for digit else 0.
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	return (0);
}
