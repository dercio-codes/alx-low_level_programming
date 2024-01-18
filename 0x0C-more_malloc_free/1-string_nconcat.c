
#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: unknown number of bytes
 * Return: the new concatenated string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *concatStr = malloc(strlen(s1) + strlen(s2) + 1);
if (concatStr == NULL || s1 == NULL || s2 == NULL || n == NULL)
{
return (NULL);
}
strcpy(concatStr, s1);
if (n < strlen(s2))
{
strncat(concatStr, s2, n);
}
else
{
strcat(concatStr, s2);
}
return (concatStr);
}
