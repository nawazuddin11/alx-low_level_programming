#include <stdlib.h>
#include <stdio.h>

/**
 * word_len - returns the length of a word starting from a given pointer
 * @str: the string to scan
 *
 * Return: length of word
 */
int word_len(char *str)
{
    int len = 0;

    while (str[len] && str[len] != ' ')
        len++;

    return (len);
}

/**
 * count_words - counts the number of words in a string
 * @str: the string to evaluate
 *
 * Return: number of words
 */
int count_words(char *str)
{
    int count = 0;

    while (*str)
    {
        while (*str == ' ')
            str++;

        if (*str != '\0')
        {
            count++;
            str += word_len(str);
        }
    }

    return (count);
}

/**
 * strtow - splits a string into words
 * @str: the string to split
 *
 * Return: pointer to an array of strings (words), or NULL
 */
char **strtow(char *str)
{
    char **words;
    int i = 0, word_count, len, k = 0, j;

    if (str == NULL || *str == '\0')
        return (NULL);

    word_count = count_words(str);
    if (word_count == 0)
        return (NULL);

    words = malloc(sizeof(char *) * (word_count + 1));
    if (words == NULL)
        return (NULL);

    while (*str)
    {
        while (*str == ' ')
            str++;

        if (*str)
        {
            len = word_len(str);
            words[i] = malloc(sizeof(char) * (len + 1));

            if (words[i] == NULL)
            {
                for (j = 0; j < i; j++)
                    free(words[j]);
                free(words);
                return (NULL);
            }

            for (k = 0; k < len; k++

