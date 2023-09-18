#ifndef PRINTF_H
#define PRINTF_H

#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * struct handler -struct to handle which funtion is chosen
 * @type: pointer for char variable
 * @funcptr: function pointer
 *
 *Description: Struct to store char and function pointer
 */

typedef struct handler
{
	char *type;
	int (*funcptr)(va_list);
} handler;

int _printf(const char *format, ...);
int print_char(va_list);
int print_U(va_list);
int print_octal(va_list);
int print_hex(unsigned int, char);
int print_hexa(va_list);
int print_hexA(va_list);
int print_string(va_list);
int print_double(va_list);
int print_integer(va_list);
int _putchar(char c);
int print_percentage(va_list);
int print_rot(va_list list);
int print_p(va_list val);
int print_binary(va_list);
int (*get_func(char))(va_list);
#endif
