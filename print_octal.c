#include "main.h"

/**
 * print_oct - a function that converts to oct
 * @val: variable param
 * Return: count
 *
 */

int print_oct(va_list val)
{
	int i, count = 0;
	int *arr;
	unsigned int num = va_arg(val, unsigned int);
	unsigned int temp = num;

	while (num / 8 != 0)
	{
		num = num / 8;
		count++;
	}
	count++;
	arr = malloc(sizeof(int) * count);
	if (arr == NULL)
		return (NULL);
	for (i = 0; i < count; i++)
	{
		arr[i] = temp % 8;
		temp = temp / 8;
	}
	for (i = count - 1; i >= 0; i--)
		_putchar(arr[i] + '0');
	free(arr);
	return (count);
}


