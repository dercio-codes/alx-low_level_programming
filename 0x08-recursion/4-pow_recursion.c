#include "main.h"

/**
 * _pow_recursion - power function
 * @x: value to be raise
 * @y: raised by value
 * Return: integer
 */

int _pow_recursion(int x, int y)
{
if (x == 0 || y == 0)
{
return (1);
}
else if (y < 0)
{
if (x < 0 || y < 0)
{
return (-1);
}
return (1 / _pow_recursion(x, -y));
}
else
{
return (x * _pow_recursion(x, y - 1));
}
}
