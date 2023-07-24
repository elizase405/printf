#include <unistd.h>

/**
 * _putchar - prints a character to standard output
 * @c: character to be printed
 *
 * Return: a char
 */

char _putchar(char c)
{
	return (write(1, &c, 1));
}
