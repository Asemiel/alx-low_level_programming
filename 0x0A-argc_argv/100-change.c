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
int j;
int coins[] = {25, 10, 5, 2, 1};
if (argc != 2)
{
printf("%s\n", "Error");
return (1);
}
num = atoi(argv[1]);
if (num < 0)
{
printf("0\n");
return (0);
}
for (j = 0; j < 5 && num >= 0; j++)
{
while (num >= coins[j])
{
num -= coins[j];
result++;
}
}
printf("%d\n", result);
return (0);
}
