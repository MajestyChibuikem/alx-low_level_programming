#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char var;

	for (var = '0'; var <= '9'; var++)
	{
		putchar(var);
	}
	for (var = 'a'; var <= 'f'; var++)
	{
		putchar(var);
	}
	putchar('\n');
	return (0);
}
