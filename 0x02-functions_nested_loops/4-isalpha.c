#include "main.h"
/**
 * _isalpha - checks whether int c is a character.
 * @c: variable to be checked.
 * Return: 1 when c is a character and 0 if its not a character.
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);

}
