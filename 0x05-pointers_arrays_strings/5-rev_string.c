#include "main.h"

/**
 *rev_string - reverses a string.
 *@s: string to be reversed.
 *
 */
void rev_string(char *s)
{
	int i;
	int count = 0;
	int m;

	for (i = 0; s[i] != '\0'; i++)
		count++;
	for (i = 0; i < count / 2; i++)
	{
		m = s[i];
		s[i] = s[count - 1 - i];
		s[count - 1 - i] = m;
	}
}
