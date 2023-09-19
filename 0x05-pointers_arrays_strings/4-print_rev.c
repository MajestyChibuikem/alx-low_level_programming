#include <stdio.h>
#include "main.h"
/**
 * print_rev - print string in reverse
 * @s: value
 * Return: s in reverse
 */
void print_rev(char *s)
{
	int len = 0;

	for (len = 0; s[len] != '\0'; len++)
	{
	}
	for (len = len - 1; len >= 0; len--)
	{
		_putchar(s[len]);
	}
	_putchar('\0');
}
