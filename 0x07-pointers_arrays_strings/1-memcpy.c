#include "main.h"
/**
 * *_memcpy - copy memory adress
 * @dest: destination
 * @src:source
 * @n: number of byte
 * Return:char
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0;
	int i = n;

	for ( ; r < i; r++)
	{
		dest[r] = src[r];
		n--;
	}
	return (dest);
}
