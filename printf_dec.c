#include "main.h"

/**
<<<<<<< HEAD
 * print_dec - a function that prints decimals
 * @args: argument
 * Return: number of characters
 */

int print_dec(va_list args)
{
	int n = va_arg(args, int);
	int num, last = n % 10, digit, exp = 1;
=======
 * printf_dec - prints decimals
 * @arg: argument to print
 * Return: number of characters printed
 */

int printf_dec(va_list arg)
{
	int n = va_arg(arg, int);
	int num, last_val = n % 10, dig_val, exp = 1;
>>>>>>> 9d9b06c7a8e2bedc11e8f286f9ea0021f7f584cd
	int i = 1;

	n = n / 10;
	num = n;

<<<<<<< HEAD
	if (last < 0)
=======
	if (last_val < 0)
	{
		_putchar('-');
		num = -num;
		n = -n;
		last_val = -last_val;
		i++;
	}
	if (num > 0)
>>>>>>> 9d9b06c7a8e2bedc11e8f286f9ea0021f7f584cd
	{
		while (num / 10 != 0)
		{
			exp = exp * 10;
			num = num / 10;
		}
		num = n;
		while (exp > 0)
		{
<<<<<<< HEAD
			digit = num / exp;
			_putchar(digit + '0');
=======
			dig_val = num / exp;
			_putchar (dig_val + '0');
			num = num - (dig_val * exp);
>>>>>>> 9d9b06c7a8e2bedc11e8f286f9ea0021f7f584cd
			exp = exp / 10;
			i++;
		}
	}
<<<<<<< HEAD
	_putchar(last + '0');
=======
	_putchar(last_val + '0');
>>>>>>> 9d9b06c7a8e2bedc11e8f286f9ea0021f7f584cd

	return (i);
}
