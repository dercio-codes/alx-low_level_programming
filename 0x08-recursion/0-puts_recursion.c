#include main.h

/**
 * _puts_recursion - prints a string, followed by a new line
 * @s: string to print
 * Return: void
 */

void _puts_recursion(char *s)
{
if (*s == 0)
{
_put_char("\n");
}
_put_recursion(*s);
_put_recursion("\n");
}
