#include "main.h"
/**
 *_isupper - checks for uppercase letter.
 *@c: vriable to checked.
 *Return: 1 for uppercase elso 0.
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
