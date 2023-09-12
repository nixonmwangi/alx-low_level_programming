#include <stdio.h>
/**
  * main - computes and prints the sum of all the multiples of
  * 3 or 5 below 1024.
  * Return: 0 on success.
  */

int main(void)
{
	int n, m;

	for (n = 0; n < 1024; n++)
		if (n % 3 == 0 || n % 5 == 0)
			m += 1;
	printf("%d\n", m);
	return (0);
}
