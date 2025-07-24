/* dynamic_functions.c */
#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>  
int _putchar(char c) { return write(1, &c, 1); }
int _islower(int c) { return (c >= 'a' && c <= 'z'); }
int _isalpha(int c) { return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')); }
int _abs(int n) { return (n < 0 ? -n : n); }
int _isupper(int c) { return (c >= 'A' && c <= 'Z'); }
int _isdigit(int c) { return (c >= '0' && c <= '9'); }
int _strlen(char *s) { int i = 0; while (s[i]) i++; return i; }
void _puts(char *s) { while (*s) _putchar(*s++); _putchar('\n'); }
char *_strcpy(char *dest, char *src) { char *p = dest; while ((*p++ = *src++)); return dest; }
int _atoi(char *s) { return atoi(s); }
char *_strcat(char *dest, char *src) { return strcat(dest, src); }
char *_strncat(char *dest, char *src, int n) { return strncat(dest, src, n); }
char *_strncpy(char *dest, char *src, int n) { return strncpy(dest, src, n); }
int _strcmp(char *s1, char *s2) { return strcmp(s1, s2); }
char *_memset(char *s, char b, unsigned int n) { return memset(s, b, n); }
char *_memcpy(char *dest, char *src, unsigned int n) { return memcpy(dest, src, n); }
char *_strchr(char *s, char c) { return strchr(s, c); }
unsigned int _strspn(char *s, char *accept) { return strspn(s, accept); }
char *_strpbrk(char *s, char *accept) { return strpbrk(s, accept); }
char *_strstr(char *haystack, char *needle) { return strstr(haystack, needle); }

