#include <stdlib.h>
#include "main.h"
/**
 * _atoi - convert a string to number
 * @s:  char value
 * Return: s as int
 */
int _atoi(char *s)
{
	char *str = "test";
	long int result = strtol(str, &s, 10);

	if (end == str || *temp != '\0')
	{
		_putchar(0);
	}
	else
	{
		_putchar(result);
	}
}
