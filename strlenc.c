#include "main.h"

/**
 * _strlenc - return const pointer to a character
 * @str: char pointer
 * Return: 1
 */

int _strlenc(const char *str)
{
	int i;

	for (i = 0; str[i] != 0; i++)
		;
	return (i);
}
