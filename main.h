#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <string.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>


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
int printf_unsigned(va_list arg);
int printf_int(va_list arg);
int printf_dec(va_list arg);
int print_oct(va_list val);
int print_hex(va_list val);
int print_HEX(va_list val);
int print_HEX_ex(unsigned int num);
int print_exc(va_list val);
int print_reve(va_list val);
int print_rot13(va_list val);

#endif
