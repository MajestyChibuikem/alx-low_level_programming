#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Successs)
 */
int main(void)
{
	int var;

	for (var = 0; var <= 9; var++)
	{
		putchar(var + '0');
		if (var < 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	return (0);
}
