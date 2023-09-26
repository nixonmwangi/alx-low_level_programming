#include "main.h"
#include <stdio.h>
/**
 *_strpbrk -  searches a string for any of a set of bytes.
 *@s: first string.
 *@accept: string.
 *Return: pointer to byte that matches one of the byes in accept or NULL.
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i, z;

	i = 0;
	z = 0;

	while (s[i] != '\0')
	{
		z = 0;

		while (accept[z] != '\0')
		{
			if (s[i] == accept[z])
				return ((s + i));
			z++;
		}
		i++;
	}
	return (NULL);
}
