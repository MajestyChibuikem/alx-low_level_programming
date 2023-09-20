#include <stdio.h>
#include "main.h"

/**
 * _strcat - functoin that concatenates two strings
 * @dest: string value
 * @src: string value
 * Return: *dest
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;

	while (str[j] != '\0')
	{
		dest[i] = str[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
