#include <stdio.h>
#include <stdlib.h>
/**
 * swap_int - swaps the value of two integers
 * @a: value
 * @b: value
 * Return: a,b
 */
void swap_int(int *a, int *b)
{
	int n = *a;
	*a = *b;
	*b = n;
}
