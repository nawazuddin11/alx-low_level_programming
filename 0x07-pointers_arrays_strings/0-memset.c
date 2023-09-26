#include "main.h"
/**
 * *_memset - fills memory with constant
 * @s:is parameter
 * @b:is also parameteer
 * @n:number
 * Return: char
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for ( ; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
