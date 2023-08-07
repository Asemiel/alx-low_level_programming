#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints all arguments it receives
 * atoi - This converts a string to an integer
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
int result = 0;
int num;
int i, j, k;

for (i = 1; i < argc; i++)
{
for (j = 0; argv[i][j] != '\0'; j++)
{
if (argv[i][j] > '9' || argv[i][j] < '0')
{
printf("%s\n", "Error");
return (1);
}
}
}
for (k = 1; k < argc; k++)
{
num = atoi(argv[k]);
result += num;
}
printf("%d\n", result);
return (0);
}
