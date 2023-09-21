#include "main.h"
/**
 *_strncpy - copies a string.
 *@dest: the string that will modified.
 *@src: the string that will be concatenated to @des.
 *@n: how much to copy from src into dest.
 *Return: a pointer to dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int m = 0;

	while (m < n && src[m] != '\0')
	{
		dest[m] = src[m];
		m++;
	}
	while (m < n)
	{
		dest[m] = '\0';
		m++;
	}
	return (dest);
}
