#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>


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

#endif
