#include <stdio.h>
/**
 * main - Entry point
 * Description: A program that prints the alphabet in lowercase, followed by a new line
 * Return: Always 0
 */
int main(void)
{
	char c = 'a';
	while (c <= 'z')
	{
		if (c != 'e' && c != 'q')
		{
			putchar(c);
		}
		c++;
	}
	putchar('\n');
	return (0);
}
