#include "main.h"
#include <stdlib.h>
/**
 * _malloc_checked - checks for memory and allocated the amount eneted
 * @b : the amount of space to reserve in memory
 * Return : a pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
void *p = malloc(b);
if (p == NULL)
{
return (void *)98;
}
return p;
}
