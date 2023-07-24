#include "main.h"

/**
 * print_char - prints given character
 * @c: character to be printed
 *
 * Return: void
 */

void print_char(char c)
{
	_putchar(c);
}

/**
 * print_string - prints given character
 * @str: string to be printed
 *
 * Return: void
 */

void print_string(char *str)
{
	while (*str != 0)
	{
		_putchar(*str);
		str++;
	}
}
