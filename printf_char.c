#include "main.h"

/**
 * print_char - prints character
 * @val: arguments
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

