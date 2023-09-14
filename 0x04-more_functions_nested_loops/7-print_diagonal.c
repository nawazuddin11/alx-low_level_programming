#include "main.h"
/**
 * print_diagonal - print a diagonal
 * @n: number of time
 * Return: void
 */
void print_diagonal(int n)
{
	int i = 1;

	while (i <= n)
	{
		if (n < 0 || n == 0)
		{
			_putchar('\n');
		}
		else
		{
			_putchar('\\');
			_putchar('\n');
			while (i <= n)
			{
				_putchar(' ');
				i++;
			}
		}
		i++;
	}
	_putchar('\n');
}
