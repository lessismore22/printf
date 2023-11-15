#include "main.h"

/**
 * printf_char - prints character
 * @arg: arguments
 * Return: 1
 */
int printf_char(va_list arg)
{
	int i = 0;
	char c;

	c = va_arg(arg, int);

	_putchar(c);
	i++;

	return (1);
}
