#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 *main - Entry point
 *int n and m: variables to be sorted
 *Description:to sort the last digit of a number
 *Return: always 0 for success
 */
int main(void)
{
	int n;
	int m;

	n = 0;
	m = n % 10;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (m > 5)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, n % 10);
	}
	else if (m > 0 && m < 6)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, n % 10);
	}
	else
	{
		printf("Last digit of %d is %d and is 0\n", n, n % 10);
	}
	return (0);

}
