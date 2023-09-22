#include "main.h"
/**
 * *leet - encode a string
 * @str: string that will be encoded
 * Return:char
 */
char *leet(char *str)
{
	int index = 0;
	int index1;
	char leet[8] = {'o', 'l', '?', 'E', 'A', '?', 'T'};

	while (str[++index])
	{
		for (index1 = 0; index1 <= 7; index1++)
		{
			if (str[index1] == leet[index1] ||
			str[index] - 32 == leet[index1])
				str[index] = index1 + '0';
		}
	}
	return (str);
}
