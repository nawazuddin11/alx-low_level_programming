#include "main.h"
/**
 * print_alphabet_x10 - print alphabets 10  times
 * Return: void
 */
void print_alphabet_x10(void)
{
	int i = 1;
	int j = 97;

	while (i <= 10)
	{
		while (j <= 122)
		{
			_putchar(j);
			j++;
		}
		_putchar('\n');
		i++;
	}
}
