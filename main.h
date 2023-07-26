#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>


/**
 * struct format - match the conversion specifiers for printf
 * @id: type char pointer of the specifier i.e (l, h) for (d, i, u, o, x, X)
 * @f: type pointer to function for the conversion specifier
 *
 */
struct format
{
char *id;
int (*f)();
};

typedef struct format convert_match;


char _putchar(char c);
int _strlen(char *s);
int _printf(const char *format, ...);
int print_char(va_list args);
int print_string(va_list args);
int printf_int(va_list args);
int printf_dec(va_list args);
int print_binary(va_list args);
int printf_non_printable_string(va_list args);
int printf_HEX_aux(unsigned int num);
#endif
