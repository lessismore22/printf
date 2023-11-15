#include "main.h"

/**
 * _printf - this function produces output according
 * to a particular format
 * @format: identifier to look for
 * Return: the number of characters printed
 */
int _printf(const char *format, ...)
{
	spec_types st[] = {
		{"%c", printf_char}, {"%s", printf_string},
		{"%%", printf_sign},
		{"%i", printf_int},
		{"%d", printf_dec}
	};

	va_list args;
	int i = 0, j;
	int len = 0;

	va_start(args, format);

	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);
Here:
	while (format[i] != '\0')
	{
		j = 4;
		while (j >= 0)
		{
			if (st[j].id[0] == format[i] && st[j].id[1] == format[i + 1])
			{
				len += st[j].f(args);
				i = i + 2;
				goto Here;
			}
			j--;
		}
		_putchar(format[i]);
		len++;
		i++;
	}
	va_end(args);
	return (len);
}
