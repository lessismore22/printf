#include "main.h"

/**
 * printf_exc - function that prints exclusivr string
 * @arg: value
 * Return: no. of characters
 *
 */

int print_exc(va_list arg)
{
	char *s;
	int i, str_len = 0;
	unsigned int value;

	s = va_arg(arg, char *);
	if (s == NULL)
		s = "(null)";
	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] < 32 || s[i] >= 127)
		{
	        	_putchar('\\');
	         	_putchar('x');
		        str_len = str_len + 2;
		        value = s[i];
		        if (value < 16)
			{
				_putchar('0');
				str_len++;
			}

			str_len = str_len + printf_HEX_ex(value);
		}
		else
		{
			_putchar(s[i]);
			str_len++;
		}
	}
	return (str_len);
}

