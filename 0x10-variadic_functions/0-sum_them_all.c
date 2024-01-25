#include <stdio.h>
#include <stdlib.h>
#include "variadic_functions.h"
#include <stdarg.h>


int sum_them_all(const unsigned int n, ...)
{
  int i,total = 0;
  va_list args;

  va_start(args,n);

  if ((int)n == 0)
    {
      return (0);
    }
  else
    {
      for (i=0 ; i < (int)n ; i ++)
        {
          int current = va_arg(args , int);
          total = total + current;
        }
    }
  va_end(args);
  return (total);
}
