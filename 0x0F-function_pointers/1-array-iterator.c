#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - Reallocates a memory block using malloc and free
 * @array: Pointer to the memory previously allocated with a call to malloc
 * @size: Size of the allocated space for ptr
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
