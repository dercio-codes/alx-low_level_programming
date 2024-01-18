#include <stdlib.h>
#include <string.h>

/**
 * _calloc - Allocates memory for an array of nmemb elements of size bytes
 * @nmemb : The number of elements in the array.
 * @size : The size of each element in bytes.
 * Return: A pointer to the allocated memory, or NULL if nmemb or size is 0
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
void *result = malloc(nmemb * size);

if (nmemb == 0 || size == 0)
{
return (NULL);
}
if (result == NULL)
{
return (NULL);
}
memset(result, 0, nmemb * size);
return (result);
}
