#include "main.h"
/**
 * _strlen - compute the length of string which excludes \0 char
 * @s: pointer to a char.
 *
 * Return: length of string
 */
int _strlen(char *s)
{
	int counter = 0;

	while (*s != '\0')
	{
		s++;
		counter++;
	}
	return (counter);
}
