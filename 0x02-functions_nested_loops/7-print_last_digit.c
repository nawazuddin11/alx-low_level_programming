#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
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
