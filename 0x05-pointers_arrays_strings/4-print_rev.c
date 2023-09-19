#include "main.h"
/**
 * print_rev - print reverse string
 * @s:is the string
 * Return: void
 */
void print_rev(char *s)
{
	int lon = 0;
	int o;

	while (*s != '\0')
	{
		lon++;
		s++;
	}
	s--;
	for (o = lon; o > 0; o--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
