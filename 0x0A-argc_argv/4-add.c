#include <stdio.h>
#include <stdlib.h>

/**
* main - prints its name
* @argc: argument count
* @argv: argument array
* Return: it's name
*/

int main(int argc, char *argv[])
{
int i, total;
for (i = 0; i < argc ; i++)
{
total = total + atoi(argv[i]);
}
printf("%d\n", total);
return (0);
}
