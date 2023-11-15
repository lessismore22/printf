#include "main.h"

/**
 * printf_int - prints integer
 * @arg: argument to be printed
 * Return: number of characters printed
 */

int print_int(va_list arg)
{
	int n = va_arg(arg, int);
	int num, last_val = n % 10, dig_val, exp = 1;
	int i = 1;

	n = n / 10;
	num = n;

	if (last_val < 0)
	{
		_putchar('-');
		num = -num;
		n = -n;
		last_val = -last_val;
		i++;
	}
	if (num > 0)
	{
		while (num / 10 != 0)
		{
			exp = exp * 10;
			num = num / 10;
		}
		num = n;
		while (exp > 0)
		{
			dig_val = num / exp;
			_putchar (dig_val + '0');
			num = num - (dig_val * exp);
			exp = exp / 10;
			i++;
		}
	}
	_putchar(last_val + '0');

	return (i);
}
