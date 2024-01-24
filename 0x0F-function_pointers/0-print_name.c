#include <stdio.h>

/**
 * print_name - creates an array of chars
 * @name: the name we want to print out
 * @f: a pointer to the function we want top execute
 * Return: NULL if size = 0 else size
 */

void print_name(char *name, void (*f)(char *))
{
(*f)(name);
}

/**
 * print_the_name - prints the actual name
 * @name: the name we want to print out
 */

void print_the_name(char *name)
{
printf("Hello, my name is %s\n", name);
}
