#include <stdio.h>
/**
 * main - Entry point
 * Description: Print the alphabet in lowercase, and then in uppercase
 * Return; Always 0
 */
int main(void)
{
	char c = 'a';

	char d = 'A';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	while (d <= 'Z')
	{
		putchar(d);
		d++;
	}
sh: 1: q: not found
	return (0);
}
