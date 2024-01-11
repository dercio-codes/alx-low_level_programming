#include "main.h"

/**
 * _pow_recursion - returns the power of the given inputs
 * @y : interget entered for check
 * @x : interget entered for check
 */

int _pow_recursion(int x, int y)
{
if (x == 0 || y == 0 || x == 1 || y == 1)
{
return (1);
}
else
{
int answer = (x * x);
return (answer);
}
}
