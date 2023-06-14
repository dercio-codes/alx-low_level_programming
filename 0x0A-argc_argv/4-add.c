#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  int sum = 0;
  int i;

  for (i = 1; i < argc; i++) {
    int number = atoi(argv[i]);

    if (number < 0 || !isdigit(argv[i][0])) {
      printf("Error\n");
      return 1;
    }

    sum += number;
  }

  printf("%d\n", sum);

  return 0;
}
