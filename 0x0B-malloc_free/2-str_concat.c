#include <stdlib.h>

/**
 * str_concat - concatenates two strings into a newly allocated memory space
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer to the new concatenated string,
 *         or NULL if memory allocation fails
 */
char *str_concat(char *s1, char *s2)
{
    char *concat;
    unsigned int i = 0, j = 0, len1 = 0, len2 = 0;

    /* Treat NULL as empty strings */
    if (s1 == NULL)
        s1 = "";
    if (s2 == NULL)
        s2 = "";

    /* Calculate lengths */
    while (s1[len1])
        len1++;
    while (s2[len2])
        len2++;

    /* Allocate memory for the new string */
    concat = malloc(sizeof(char) * (len1 + len2 + 1));
    if (concat == NULL)
        return (NULL);

    /* Copy s1 */
    while (i < len1)
    {
        concat[i] = s1[i];
        i++;
    }

    /* Copy s2 */
    while (j < len2)
    {
        concat[i] = s2[j];
        i++;
        j++;
    }

    concat[i] = '\0';
    return (concat);
}

