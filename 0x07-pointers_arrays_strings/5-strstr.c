#include "main.h"
#include <stdio.h>

/**
 *_strstr -  locates a substring.
 *@haystack: source string to search through.
 *@needle: string to search for.
 *Return: return beginning of located substring or NULL.
 */
char *_strstr(char *haystack, char *needle)
{
	int i, z;

	i = 0;
	z = 0;

	while (haystack[i] != '\0')
	{
		if (needle[z] != '\0' && haystack[i] == needle[z])
		{
			return ((haystack));
			i++;
		}
		z++;
	}
	return (NULL);
}

