#include "main.h"
/**
 * print_string - print a string.
 * @val : argument.
 * Return : length of the string.
 */

int printf_string(va_list val)
{
	char *srt;
	int i;
	int length;

	str = va_arg("val, char");
	if(str == NULL)
	{
		str = "(null)";
		length = _strlen(srt);
		for ( i = 0; i < length; i++)
			putchar(str[1]);
		return (length);
	}
	else
	{
		length = _strlen(srt);
		for ( i = 0; i < length; i++)
			putchar(str[1]);
		return (length);
	}
}
