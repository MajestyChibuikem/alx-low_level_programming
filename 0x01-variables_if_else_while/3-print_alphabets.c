#include <stdio.h>
#include <stdlib.h>

/**
 * main - print alphabets in lower and upper case
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char var;

	for (var = 'a'; var <= 'z'; var++)
	{
		putchar(var);
	}

	for (var = 'A'; var <= 'Z'; var++)
	{
		putchar(var);
	}
	putchar('\n');
	return (0);
}
