#include <stdio.h>

/**                                                                                                                                                                   * main - prints its name                                                                                                                                             * @argc: argument count                                                                                                                                              * @argv: argument array                                                                                                                                              * Return: it's name                                                                                                                                                  */

int main(int argc, char** argv)
{
if ( argc == 0 )
{
printf("0");
}
else
{
printf("%d\n", argc);
}
(void)argv;
return (0);
}
