#include <stdio.h>

/**                                                                                                                                                                   * main - prints its name                                                                                                                                             * @argc: argument count                                                                                                                                              * @argv: argument array                                                                                                                                              * Return: it's name                                                                                                                                                  */

int main(int argc, char *argv[])
{
if (argc == 1)
{
printf("0\n");
}
else
{
printf("%d\n", argc - 1);
}
(void)argv;
return (0);
}
