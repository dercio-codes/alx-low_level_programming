#include "main.h"

/**
 * factorial - Prints a factorial of number.
 * @n: The string to be printed.
 *
 * Return: factorial of number.
 */
int factorial(int n) {
  int factorial;

  if (n < 0) {
    return -1;
  } else if (n == 0) {
    return 1;
  } else {
    factorial = 1;
    for (int i = 1; i <= n; i++) {
      factorial *= i;
    }
    return factorial;
  }
}
