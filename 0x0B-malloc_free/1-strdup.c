#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: string to allocate
 * Return: NULL if str = Null else pointer
 */

char *_strdup(char *str)
{
char *strDuplicate;

if (str == NULL)
{
return (NULL);
}
strDuplicate = malloc(strlen(str) + 1);
if (strDuplicate == NULL)
{
return (NULL);
}
strcpy(strDuplicate, str);
return (strDuplicate);
}
