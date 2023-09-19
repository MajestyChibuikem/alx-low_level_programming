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

	while (('-' == (*str)) || ((*str) == '+'))
	{
		if (*str == '-')
			puiss = puiss * -1;
		str++;
	}
	while ((*str >= '0') && (*str <= '9'))
	{
		result = (result * 10) + ((*str) - '0');
		str++;
	}
	return (result * puiss);
}
