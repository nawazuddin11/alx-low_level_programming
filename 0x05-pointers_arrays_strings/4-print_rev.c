#include "main.h"
/**
 * print_rev - print reverse string
 * @s:is the string
 * Return: void
 */
void print_rev(char *s)
{
	int lon = 0;
	int o = lon;

	while (*s != '\0')
	{
		lon++;
		s++;
	}
	s--;
	while (o > 0)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
