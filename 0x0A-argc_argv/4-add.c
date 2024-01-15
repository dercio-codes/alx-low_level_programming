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
if (atoi(argv[i]) != 0) 
{
total = total + atoi(argv[i]);
}
}
printf("%d\n", total);
return (0);
}
