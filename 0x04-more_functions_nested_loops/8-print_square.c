#include "main.h"
/**
 * print_square - print a squre of a number
 * @size: number to take the squre of
 * Return: void
 */
void print_square(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i = 1;
		int j = 1;

		while (i <= size)
		{
			while (j <= size)
			{
				_putchar('#');
				j++;
			}
			_putchar('\n');
			i++;
		}
	}
}
