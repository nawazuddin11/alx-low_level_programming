#include "main.h"

/**
 * _isupper - check a letter if is ni uppercase
 *
 * @c: The character to print
 * Return: int
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 97)
		return (1);
	else
		return (0);
}
