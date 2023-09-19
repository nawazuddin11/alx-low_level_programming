#include "main.h"
/**
 * swap_int - swap two numbers
 * @a: is hte first number
 * @b: is the second number
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int m;

	m = *a;
	*a = *b;
	*b = m;
}
