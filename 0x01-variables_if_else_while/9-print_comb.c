#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int i = 0;

	while (i <= 9)
	{
		putchar(i + '0');
		if (i == 9)
		{
			i++;
			continue;	
		}
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
