#include "main.h"
/**
 * rev_string - reverse string
 * @s: is the string
 * Return: void
 */
void rev_string(char *s)
{
	char rev =  s[0];
	int i = 0;
	int j;

	while (s[i] != '\0')
	{
		i++;
		for (j = 0; j < i; j++)
		{
			i--;
			rev = s[j];
			s[j] = s[i];
			s[i] = rev;
		}
	}
}
