#include "main.h"
/**
 * more_numbers - print numbers
 * Return: void
 */
void more_numbers(void)
{
	int i = 0;

	while (i < 10)
	{
		int j = 0;

		while (j <= 14)
		{
				_putchar('0' + (j / 10));
			j++;
			_putchar('0' + (j % 10));
		}
		_putchar('\n');
		i++;
	}
}
