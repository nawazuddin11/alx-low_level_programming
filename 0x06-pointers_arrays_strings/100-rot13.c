#include "main.h"
/**
 * rot13 - encoding a string using rot13
 * @s: is the string
 * Return: char
 */
char *rot13(char *s)
{
	int i, j;
	char *l1 = {"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz"};
	char l2 = {"NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm"};

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (s[i] == l1[j])
			{
				s[i] = l2[j];
				break;
			}
		}
	}
	return (s);
}
