#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int var;

	for (var = 0; var <= 9; var++)
	{
		putchar(var + '0');
	}
	putchar('\n');
	return (0);
}
