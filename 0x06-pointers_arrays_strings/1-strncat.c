#include <stdio.h>
#include "main.h"
/**
 * _strncat - concatenates two strings too using n bytes from src
 * @dest: string value
 * @src: string value
 * @n: integer value
 * Return: pointer to dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int a, b;

	a = 0;

	while (dest[a] != '\0')
	{
		a++;
	}

	b = 0;

	while (n > b && src[b] != '\0')
	{
		dest[a] = src[b];
		a++;
		b++;
	}
	dest[a] = '\0';
	return (dest);
}
