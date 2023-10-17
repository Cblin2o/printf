#include "main.h"

/**
 * _strlen - returns the length of the string.
 * @str : string pointer .
 * Return : 1.
 */

int _strlen(char *str)
{
	int i;

	for (i = 0; str[i] !=0; i++)
		;
	return (i);
}
/**
 * _strlen - _strlwn function for char pointer string.
 * @str: char pointer
 * Return : 1
 */

int _strlenn(const char *str)
{
	int i;

	for (i = 0; str[i] !=0; i++)
		;
	return (i);
}
