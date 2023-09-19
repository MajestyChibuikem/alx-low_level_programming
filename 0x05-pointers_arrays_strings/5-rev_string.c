#include <stdio.h>
#include "main.h"
/**
 * rev_string - reverse a string
 * @s: string value
 * Return: s in reverse
 */
void rev_string(char *s)
{
	int len = 0;
	int l = 0;
	char *i = s;
	int x = 0;
	int y;
	char z;

	while (*i != '\0')
	{
		i++;
		len++;
	}
	l = len - 1;
	for ( ; x < ((l / 2) + 1) ; x++)
	{
		y = (l - x);
		z = s[x];
		s[x] = s[y];
		s[y] = z;
	}
}
