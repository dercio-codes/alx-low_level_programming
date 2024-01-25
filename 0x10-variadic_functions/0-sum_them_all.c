#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - sum of all its parameters
 * @n: type of the parameter
 * @...: unlimited number of parameters
 *
 * Return: Result of operation
 */

int sum_them_all(const unsigned int n, ...)
{
  int i,total = 0;
  va_list args;

  va_start(args,n);

for (i=0 ; i < (int)n ; i ++)
        {
          int current = va_arg(args , int);
          total = total + current;
        }
  va_end(args);
  return (total);
}
