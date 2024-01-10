#include "main.h"

/**
 * _strlen_recursion - prints a reversed string,
 * @s: string to check
 * Return: void
 */

int _strlen_recursion(char *s)
{
if (*s == '\0')
{
return 0;
}
else
{
return 1 + _strlen_recursion(str + 1);
}
}
