#include <stdio.h>
#include <stdlib.h>
/**
 * _strlen - outputs length of a char var
 * @s: value
 * Return: len
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		s++;
		len++;
	}
	return (len);
}
