#include <stdio.h>

/**
 * main - This prints the lowercase alphabet in reverse.
 *
 * Return: Always return 0 (success)
 */

int main(void)

{
char ch;

for (ch = 'z'; ch >= 'a'; ch--)
	{
putchar(ch);
	}
putchar('\n');
return (0);
}
