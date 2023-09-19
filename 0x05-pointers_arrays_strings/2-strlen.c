#include "main.h"
/**
 * _strlen - return string lenght
 * @s: is the string
 * Return: int
 */
int _strlen(char *s)
{
	int longi;

	longi = 0;
	while (*s != '\0')
	{
		longi++;
		s++;
	}
	return (longi);
}
