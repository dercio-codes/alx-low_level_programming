#include "main.h"

/**
 * is_prime_number - power function
 * @n: value to be checked
 * Return: integer
 */

int is_prime_number(int n)
{
if (n % 2 == 0 || n <= 1)
{
return (0);
}
else
{
return (1);
}
}
