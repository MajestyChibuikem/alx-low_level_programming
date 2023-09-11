#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	char var;

	for (var = 'a'; var <= 'z'; var++)
	{

		if (var != 'e' && var != 'q')
		{
			putchar(var);
		}
	}
	putchar('\n');
	return (0);
}
