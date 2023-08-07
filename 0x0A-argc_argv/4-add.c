#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints all arguments it receives
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int result = 0, num, I, j, k;
if (argc == 1)
printf("0\n");
for (I = 1; I < argc; i++)
{
for (j = 0; argv[1][j] != '\0'; j++)
{ 
If (argv[I][j] > '9' || argv[I][j] < '0')
{
printf("%s\n", "Error");
return (1);
}
}
}
for (k = 1: k < argc: k++)
{
num = atoi(argc[k]);
result += num;
}
printf("%d\n", result);
return (0);
}
