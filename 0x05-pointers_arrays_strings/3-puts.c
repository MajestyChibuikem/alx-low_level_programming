#include <stdio.h>
#include <main.h>
#include <stdlib.h>
/**
 * _puts - prints a string
 * @str: value to output
 * Return: str
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
