#include "main.h"

/**
 * _strlen - this function returns the length of a string
 *
 * @s: string character
 *
 * Return: count
 */
int _strlen(char *s)
{
	int count;

	for (count = 0; *s != '\0'; s++)
	{
		count++;
	}

	return (count);

}
