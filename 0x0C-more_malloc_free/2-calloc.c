#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _calloc - allocates memory.
 * @nmemb : array of content
 * @size : array size
 * Return: Always 0.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
char *result = malloc(size + 1);
if (nmemb == 0 || size == 0)
{
return (NULL);
}
if (result == NULL)
{
return (NULL);
}
return (result);
}
