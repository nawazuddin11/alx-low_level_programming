#include "main.h"

/**
 * _print_last_digit - rr
 * @c: The character to print
 *
 * Return: int 
 * On error, -1 is returned, and errno is set appropriately.
 */
int print_last_digit(int n)
{
	int l;

	l = n % 10;
	if (l < n)
	{
		_putchar(-l + 48);
		return (-l);
	}
	else
	{
		_putchar(l + 48)
			return (l);
	}
}
