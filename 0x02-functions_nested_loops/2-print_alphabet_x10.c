#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void print_alphabet_x10(void)
{
	int i = 1;

	while (i <= 10)
	{
		int j = 97;
		
		while (j <= 122)
		{
			_putchar(j);
			j++;
		}
		_putchar('\n');
		i++;	
	}
{
