#include <stdio.h>

/**
 * main - prints its name
 * @argc: argument count
 * @argv: argument array
 * Return: it's name
 */

int main(int argc , char** argv){
  int totalArgs = argc;
  printf("%s\n",argv[totalArgs]);
  return 0;
}
