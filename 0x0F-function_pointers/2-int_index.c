#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - tfind the index of the interger
 * @array: poointer to the array
 * @size: size of the array
 * @cmp: comparision function
 * Return : an interger 
 */

int int_index(int *array, int size, int (*cmp)(int))
{
int i;
if (size <= 0)
{
return (-1);
}

for ( i = 0; i < size ; i++)
{
if ((*cmp)(array[i]) != 0)
{
return i;
}
}
return (-1);
}
