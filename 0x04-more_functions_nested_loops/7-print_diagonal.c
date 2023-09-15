#include "main.h"
/**
 * print_diagonal - print a diagonal
 * @n: number of time
 * Return: void
 */
void print_diagonal(int n)
{
	if (n < 0 || n == 0)
	{
		_putchar('\n');
	}
	else
	{
		int i = 1;

		while (i <= n)
		{
			int j = 1;

			while (j <= i - 1)
			{
				_putchar(' ');
				j++;
			}
			_putchar('\\');
			_putchar('\n');
			i++;
		}
	}
}
