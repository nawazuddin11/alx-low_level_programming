#include "main.h"
/**
 * _isdigit - check for a digit
 * @c: is the character to print
 * Return: int 
 */
int _isdigit(int c)
{
	if (c >= 0 + '0' && c <= 9 + '0')
		return (1);
	else
		return (0);
}
