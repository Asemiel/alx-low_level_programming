#include "main.h"
/**
 * print_numbers - function prints the numbers, from 0 to 9
 * @c: variable
 * Return: Always 0
 */

void print_numbers(void)
{
int c;

for (c = 48; c < 58; c++)
{
_putchar(c);
}
_putchar('\n');
}
