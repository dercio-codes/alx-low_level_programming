#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - goes through an array doing what ever the function passed into it does
 * @array: Pointer to the memory previously allocated with a call to malloc
 * @size: Size of the allocated space for ptr
 * @action: function to execute
 * Return: Pointer to the reallocated memory block
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t i;

for (i = 0; i < size; i++)
{
(*action)(array[i]);
}
}
