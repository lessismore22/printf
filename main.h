#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <string.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>


typedef struct format
{
	char *id;
	int (*f)();
}spec_types;


int _printf(const char *format, ...);
int _strlen(char *s);
int printf_string(va_list val);
int printf_char(va_list val);
int printf_sign(void);
int _putchar(char c);


#endif
