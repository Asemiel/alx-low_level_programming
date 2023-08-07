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
int result;
int num1;
int num2;
if (argc != 3)
{
printf("%s\n", "Error");
return (1);
}
num1 = atoi(argv[1]);
num2 = atoi(argv[2]);
result = num1 *num2;

printf("%d\n", result);
return (0);
}
