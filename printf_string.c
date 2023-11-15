#include "main.h"

/**
 * printf_string - this function prints a string
 * @val: argument
 * @Return: length of the string
 */

int printf_string(va_list arg)
{
	char *str = va_arg(arg, char*);
	int str_len = 0, i = 0;
	
	if (str == NULL)
	{
		str = "(null)";
	}

	while (str[str_len] != '\0')
	{
		str_len++;

		_putchar(str[i]);
		i += str_len;
	}

	return (str_len);
}	
