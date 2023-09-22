#include "main.h"
/**
 * *_strcat - concatinate
 * @dest: first stirng
 * @src:is the source
 * Return: char
 */
char *_strcat(char *dest, char *src)
{
	int index;
	int dest_len;

	index = 0;
	dest_len = 0;

	while (dest[index])
		dest_len++;
	for (index = 0; src[index]; index++)
		dest[dest_len] = src[index];
	return (dest);
}
