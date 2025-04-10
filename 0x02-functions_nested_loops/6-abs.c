#include <unistd.h>
/**
 * _abs - take the absolute value of a number
 *
 * @i:is the number to be ceck
 * Return: int
 */
int _abs(int i)
{
	if (i >= 0)
		return (i);
	else
		return (i * -1);
}
