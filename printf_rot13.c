#include "main.h"
/**
* printf_rot13 - printf str to ROT13 place into buffer
* @args: type struct va_arg where is allocated printf arguments
* Return: counter
*
*/
int printf_rot13(va_list args)
{
int i, j, counter = 0;
int k = 0;
char *s = va_arg(args, char*);
char *normal = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char *rot13 = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

/* If the string is NULL, replace it with "(null)" */
if (s == NULL)
s = "(null)";

/* Loop through each character in the string */
for (i = 0; s[i]; i++)
{
k = 0;
/* Loop through each alphabet in the 'alpha' array */
for (j = 0; normal[j] && !k; j++)
{
/* If the character matches with 'alpha[j]', print 'beta[j]' */
if (s[i] == normal[j])
{
_putchar(rot13[j]);
counter++;
k = 1; /* Set 'k' to 1 to indicate a match found */
}
}
/* If the character is not an alphabet, print it as it is */
if (!k)
{
_putchar(s[i]);
counter++;
}
}

return (counter);
}
