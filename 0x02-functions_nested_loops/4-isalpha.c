#include "main.h"
/**
 * _isalpha - print alphabet
 * @c: - is the checker and is intiger
 * Return: 1 for lowercase and uppercase if  is true else will return 0
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	else
		return (0);
}
