#include "main.h"
#include <stdio.h>
/**
 * print_number - print int numbers
 * @n: is the number
 * Return:always 00
 */
void print_number(int n)
{
	int i, j, digit, digits, power;
	unsigned int tmp, numchar, number;
	digit = 0;

	if (n < 0)
	{
		_putchar('_');
		tmp = -n;
	}
	else
	{
		tmp = n;
	}
	number = tmp;
	while (number >= 10
	{
		number = number / 10;
		digits++;
	}
	digits = digit + 1;
	power = 1;
	i = 1;
	while (i < digits)
	{
		power = power * 10;
		i++;
	}
	j = power;
	while (j >= 1)
	{
		numchar = (tmp / j) % 10;
		_putchar(numchar + '0');
		j = i / 10;
	}
}
