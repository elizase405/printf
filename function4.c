#include "main.h"
#include <stdarg.h>
/**
 * printf_non_printable_string - printf non printable string.
 * @args: The va_list containing the string to print..
 * Return: the length of the string.
 */
int printf_non_printable_string(va_list args)
{
char *s;
int i, len = 0;
int cast;

s = va_arg(args, char *);
if (s == NULL)
s = "(null)";

/* Loop through each character in the string */
for (i = 0; s[i] != '\0'; i++)
{
/**
* Check if the character is a non-printable character
* (ASCII value < 32 or >= 127)
*/
if (s[i] < 32 || s[i] >= 127)
{
_putchar('\\');
_putchar('x');
/* Increment the length by 2 to account for \x */
len = len + 2;
cast = s[i];

/* If the ASCII code value is less than 16 */
if (cast < 16)
{
_putchar('0');
len++;
}
/* Print the hexadecimal representation of the ASCII code value */
len = len + printf_HEX_aux(cast);
}
else
{
_putchar(s[i]);
len++;
}
}
return (len);
}

