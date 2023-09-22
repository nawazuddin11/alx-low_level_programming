#include "main.h"
/**
 * _strcmp - compare two string
 * @s1:the first string
 * @s2:the second string
 * Return: int
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int diff = 0;

	while (1)
	{
		if (s1[i] == '\0' && s2[i] == '\0')
			break;
		else if (s1[i] == '\0')
		{
			diff = s2[i];
			break;
		}
		else if (s2[i] == '\0')
		{
			diff = s1[i];
			break;
		}
		else if (s1[i] != s2[i])
		{
			diff = s1[i] - s2[i];
			break;
		}
		else
			i++;
	}
	return (diff);
}
