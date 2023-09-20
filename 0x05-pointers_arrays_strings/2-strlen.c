#include "main.h"
#include <stdio.h>
/**
 *_strlen - returns the length of a string as an integer.
 *@s: string.
 *Return:length of size char.
 */
int _strlen(char *s)
{
	int size = 0;

	while (*(s + size) != '\0')
	{
		size++;
	}
	return (size);
}
