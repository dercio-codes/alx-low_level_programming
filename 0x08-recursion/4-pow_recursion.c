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
else
{
int answer =  x * _pow_recursion(x , y - 1);
if (x < 0 || y < 0){
answer = answer / -1 ;
}else{
return;
}
return (answer);
}
}
