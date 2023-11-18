#include "main.h"

/**
 * print_bin - a function that converts to binary
 * @val: argument
 * Return: integer
 */

int print_bin(va_list arg)
{
	unsigned int num = va_arg(arg, unsigned int);
	int count = 0;
	int bit_length = sizeof(unsigned int) * 8;

	int i;

	for (i = bit_length - 1; i >= 0; i--)
	{
		int bit = (num >> i) & 1;

		_putchar('0' + bit);
		count++;
	}

	return (count);
}
}


