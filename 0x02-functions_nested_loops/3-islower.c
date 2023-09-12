#include "main.h"

/**
 * _islower - checks whether a character is lowercase alphabet.
 * @c: variable to be checked.
 * Return: 1 for lowercase letters and 0 for letters that are not lowercase.
 *
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
