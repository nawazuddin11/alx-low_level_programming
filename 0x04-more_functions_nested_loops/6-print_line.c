#include "main.h"
/**
 * print_line - print a line
 * @n: number of line to be printed
 * Return: int
 */
void print_line(int n)
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
			 _putchar('_');
		}
		i++;
	}
	_putchar('\n');
}
