#include "main.h"
#include <stdio.h>

/**
 * _abs - computes the absolute value of an integer.
 * @n: integer to be computed.
 * Return: absolute value of the input number.
 */
int _abs(int n)
{
	if (n < 0)
		n = n * -1;
	return (n);
}
