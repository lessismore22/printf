#include "main.h"

/**
 * print_bin - a function that converts to binary
 * @val: argument
 * Return: integer
 */

int print_bin(va_list val)
{
	int pure = 0;
	int impure = 0;
	int i, a = 1, b;
	unsigned int num = va_arg(val, unsigned int);
	unsigned int p;

	for (i = 0; i < 32; i++)
	{
		p = ((a << (32 - i)) & num);
		if (p >> (31 - i))
			pure = 1;
		if (pure)
		{
			b = p >> (31 - i);
			_putchar(b + 48);
			impure++;
		}
	}
	if (impure == 0)
	{
		impure++;
		_putchar('0');
	}
	return (impure);
}


