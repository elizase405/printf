#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/* l is a long int equals to UINT_MAX + 1024 */
#define l (UINT_MAX + 1024)

/* where res is long int equals to INT_MAX * 2 */
#define res ((unsigned int)(INT_MAX * 2L))

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
int print_char(int c, va_list args);
int print_string(int c, va_list args);
int printf_int(int c, va_list args);
int printf_dec(int c, va_list args);
int print_binary(int c, va_list args);
int printf_non_printable_string(int c, va_list args);
int printf_pointer(int c, va_list args);
int print_reverse(int c, va_list args);
int printf_rot13(int c, va_list args);
int printf_HEX_aux(int c, unsigned int num);
int print_unsigned(int c, va_list args);
int print_octal(int c, va_list args);
int print_hex(int c, va_list args);
int print_Hex(int c, va_list args);

#endif
