#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strncpy - function that copies a string
 * @dest: string value which is the destination for the string being copied
 * @src: string value wich is the var being copied from
 * @n: integer value which is the number of times or number of
 * char to be copied
 * Return: Always 0 (Success)
 */
char *_strncpy(char *dest, char *src, int n)
{
	int a;

	a = 0;
	/**
	 * this loop statement checks if ais less then number of
	 * allowed characrters to be copied
	 * and checks if the src var is not empty at each iteration
	 */

	while (a < n && src[a] != '\0')
	{
		dest[a] = src[a];
		a++;
	}
	/**
	 * while src var is now empty but n condtion is not yet satified
	 * fill the dest var with empty char
	 */
	while (a < n)
	{
		dest[a] = '\0';
		a++;
	}
	return (dest);
}
