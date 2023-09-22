#include "main.h"
/**
 * *_strncat - concatinate
 * @dest:first string
 * @src:the source
 * @n:size
 * Return:char
 */
char *_strncat(char *dest, char *src, int n)
{
	int index;
	int dest_len;

	index = 0;
	dest_len = 0;
	while (dest[index++])
		dest_len++;
	for (index = 0; src[index] && index < n; index++)
		dest[dest_len++] = src[index];
	return (dest);

}
