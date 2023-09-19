#include <stdlib.h>
#include "main.h"
/**
 * _atoi - convert a string to number
 * @s:  char value
 * Return: s as int
 */
int _atoi(char *s)
{
	int result;
	int puiss;

	result = 0;
	puiss = 1;

	while (('-' == (*s)) || ((*s) == '+'))
	{
		if (*s == '-')
			puiss = puiss * -1;
		s++;
	}
	while ((*s >= '0') && (*s <= '9'))
	{
		result = (result * 10) + ((*s) - '0');
		s++;
	}
	return (result * puiss);
}
