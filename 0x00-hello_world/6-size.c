#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */

int main(void)
{
	char acharvar;
	int anintvar;
	long alongvar;
	long long alonglongvar;
	float afloatvar;

	printf("Size of a char: %lu byte(s)\n", sizeof(acharvar));
	printf("Size of an int: %lu byte(s)\n", sizeof(anintvar));
	printf("Size of a long int: %lu byte(s)\n", sizeof(alongvar));
	printf("Size of a long long int: %lu byte(s)\n", sizeof(alonglongvar));
	printf("Size of a float: %lu byte(s)\n", sizeof(afloatvar));

	return (0);
}
