#include <stdio.h>
/**
 * main - Entry point
 * Description: Program that prints all single digit numbers of base 10 from 0
 * Return: Always 0
 */
int main(void)
{
	int c = 0;
		while (c < 10)
		{
			putchar(48 + c);
			c++;
		}
	putchar('\n');
	return (0);
}
