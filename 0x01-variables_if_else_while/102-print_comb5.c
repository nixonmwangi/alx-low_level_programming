#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (Succes)
 */

int main(void)
{
	int tho;
	int hun;
	int ten;
	int ones;

for ( tho = 0 ; tho < 10 ; tho++)
{	

	for (hun = 0 ; hun <= 10 ; hun++)
	{
	
		for (ten = 0 ; ten < 10 ; ten++)
		{
			for ( ones = 0 ; ones < 10 ; ones++)
			{
				putchar('0' + tho);
				putchar('0' + hun);
				putchar(32);
				putchar('0' + ten);
				putchar('0' + ones);
				if (!(tho == 9 && hun == 8))
				{
					putchar(',');
					putchar(32);
				}
				ones++;
			}
		}
	}
}
	putchar('\n');
	return (0);
}

