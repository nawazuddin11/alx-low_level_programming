#include "main.h"

/**
 * print_sign - chacking positive or negative
 * n - is a parameter 
 *
 * Return: 1 if is positive , -1 if negative and 0 other wise
 */
int print_sign(int n)
{
	if (n < 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n > 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		return (0);
	}
}
