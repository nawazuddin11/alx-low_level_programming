#include "main.h"

/**
 * print_alphabet - make alphabet with _putchar
 *
 * Return:void
 */
void print_alphabet(void)
{
	int i;

	for (i = 97; i <= 122; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
