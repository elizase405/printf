#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>


struct format
{
  char *id;
  int (*f)();
} 

typedef struct format convert_match;


char _putchar(char c);
int _strlen(char *s)
int _printf(const char *format, ...);
void print_char(va_list args);
void print_string(va_list args);
int printf_int(va_list args);

#endif
