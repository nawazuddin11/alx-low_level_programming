#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 *           which contains a copy of the string given as a parameter
 * @str: the string to duplicate
 *
 * Return: pointer to the duplicated string, or NULL if insufficient memory
 *         or str is NULL
 */
char *_strdup(char *str)
{
    char *dup;
    unsigned int i, len = 0;

    if (str == NULL)
        return (NULL);

    while (str[len])
        len++;

    dup = malloc((len + 1) * sizeof(char));
    if (dup == NULL)
        return (NULL);

    for (i = 0; i < len; i++)
        dup[i] = str[i];
    dup[i] = '\0';

    return (dup);
}

