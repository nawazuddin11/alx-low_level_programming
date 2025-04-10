#include "main.h"

/**
 * _islower - check for upper case
 * @c: is the charcter to print
 * Return: int
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
