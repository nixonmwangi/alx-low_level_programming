#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers
 * @argc:  arguments.
 * @argv: string array.
 * Return: 0 Sucess or 1 Failure.
 */
int main(int argc, char *argv[])
{
	int i, n = 1;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	for (i = 1; i < argc; i++)
		n *= atoi(argv[i]);
	printf("%d\n", n);
	return (0);
}

