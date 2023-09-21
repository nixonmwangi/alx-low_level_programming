#include "main.h"
/**
 *_strcat - this fuction will concatenates two strings.
 *@dest: the string that will modified.
 *@src: the string that will be concatenated to @dest.
 *Return: dest, concatenated string.
 */
char *_strcat(char *dest, char *src)
{
	int d = 0;
	int s = 0;

	while (dest[d] != '\0')
	{
		d++;
	}
	while (src[s] != '\0')
	{
		dest[d] = src[s];
		d++;
		s++;
	}
	dest[d] = '\0';
	return (dest);
}
