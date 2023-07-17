#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - This prints all the letters except q and e.
 * Return: Always return 0 (success)
 */

int main(void)

{
char ch = 'a';

	while (ch <= 'z')
	{
		if (ch != 'e' && ch != 'q')
		{
			putchar(ch);
		}
		ch++;
	}
	 putchar('\n');
return (0);
}
