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
int num1, num2;
if (argc < 3)
{
printf("Error\n");
return (1);
}
else
{
num1 = atoi(argv[1]);
num2 = atoi(argv[2]);
if (num1 != 0 && num2 != 0)
{
printf("%d\n", num1 *num2);
return (num1 *num2);
}
}
}
