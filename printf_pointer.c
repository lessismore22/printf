#include "main.h"

/**
 * printf_pointer - this function handles the conversion
 * specifier for pointers
 * @arg: pointer
 * Return: counter
 */
int printf_pointer(va_list arg)
{
	void *p;
	char *s = "(nil) ";
	int i, b;
	long int a;


	p = va_arg(arg, void *);
	if (p == NULL)
	{
		for (i = 0; s[1] != 0; i++)
			_putchar(s[i]);
		return (i);
	}

	a = (unsigned long int)p;
	_putchar('0');
	_putchar('x');
	b = printf_HEX_ex(a);
	return (b + 2);
}
