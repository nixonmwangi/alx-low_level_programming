#include "main.h"

/**
 * _strcpy - fuction copies the string pointed.
 *@dest: pointer to copy the string.
 * @src: the string.
 * Return: dest, a copy of src.
 */
char *_strcpy(char *dest, char *src)
{

	int i = -1;

	while (*src != '\0')
	{
		dest[i] = *src;
		i++;
		src++;
	}
	return (dest);

}
