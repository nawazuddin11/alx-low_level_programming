#include "main.h"
/**
 * *string_toupper - convert a string to upper case
 * @str: character for the string
 * Return: char
 */
char *string_toupper(char *str)
{
	int index = 0;

	while (str[index])
	{
		if (str[index] >= 'a' && str[index] <= 'z')
			str[index] -= 32;
	}
	return (str);
}
