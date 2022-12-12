#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - Entry point
 * Description: Program that prints all single digit numbers of base 10 from 0
 * Return: Always 0
 */
int main(void)
{
	char c = '0';

	while (c <= '9')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
