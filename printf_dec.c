#include "main.h"

/**
 * print_dec - a function that prints decimals
 * @args: argument
 * Return: number of characters
 */

int print_dec(va_list args)
{
	int n = va_arg(args, int);
	int num, last = n % 10, digit, exp = 1;
	int i = 1;

	n = n / 10;
	num = n;

	if (last < 0)
	{
		while (num / 10 != 0)
		{
			exp = exp * 10;
			num = num / 10;
		}
		num = n;
		while (exp > 0)
		{
			digit = num / exp;
			_putchar(digit + '0');
			exp = exp / 10;
			i++;
		}
	}
	_putchar(last + '0');

	return (i);
}
