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
		{"%%", printf_sign}
	};
	int i = 0, j;
	int str_len = 0;

	va_list arg;

	va_start(arg, format);

	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);
Here:
	while (format[i] != '\0')
	{
		j = 2;
		while (j >= 0)
		{
			if (st[j].id[0] == format[i] && st[j].id[1] == format[i + 1])
			{
				str_len += st[j].f(arg);
				i = i + 2;
				goto Here;
			}
			j--;
		}
		_putchar(format[i]);
		str_len++;
		i++;
	}
		va_end(arg);
		return (str_len);
}
