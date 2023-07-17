#include <stdio.h>
/**
 * main - This program prints the alphabet in lowercase and then in uppercase.
 * Return: Always return 0 (success)
 */

int main(void)
{
	char c;

	char d;

	c = 'a';
	d = 'd';
	while
		(c <= 'z') {
			putchar(c);
			c++;
		}
	while
		(c <= 'z') {
			putchar(d);
			d++;
		}
	putchar('\n');
	return (0);
}
