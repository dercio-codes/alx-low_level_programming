#include "main.h"

/**
 * _pow_recursion - returns the power of the given inputs
 * @y : interget entered for check
 * @x : interget entered for check
 * Return : int
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
