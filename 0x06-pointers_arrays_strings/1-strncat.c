#include "main.h"

/**
 *_strncat -  concatenates two strings.
 *@dest: first string.
 *@src: second string.
 *@n: copy up to position.
 *Return: dest; concatenated string.
 */
char *_strncat(char *dest, char *src, int n)
{
	int d = 0;
	int s = 0;

	while (dest[d] != '\0')
	{
		d++;
	}
	while (s < n && src[s] != '\0')
	{
		dest[d] = src[s];
		d++;
		s++;
	}
	dest[d] = '\0';
	return (dest);
}
