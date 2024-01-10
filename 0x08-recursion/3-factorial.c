#includes "main.h"

/**
 * factorial - prints factors of a given number,
 * @n: number to check
 * Return: void
 */

int factorial(int n)
{
if (n < 0)
{
return (-1);
}
else
{
return (n * factorial(n - 1));
}
}
