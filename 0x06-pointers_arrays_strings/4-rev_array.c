#include "main.h"
/**
 *reverse_array - reverses the content of an array of integers.
 *@a: array to be reversed.
 *@n: what to reverse.
 *
 */
void reverse_array(int *a, int n)
{
	int m;
	int i;

	n--;
	for (i = 0;  i < n; i++)
	{
		m = a[i];
		a[i] = a[n];
		a[n] = m;
		n--;
	}

}
