# Write a function that produces output according to a format.

### Prototype: ```c int _printf(const char *format, ...);```
* Returns: the number of characters printed (excluding the null byte used to end output to strings).
- write output to stdout, the standard output stream.
+ ==format== is a character string. The format string is composed of zero or more directives. See man 3 printf for more detail. You need to handle the following conversion specifiers:
    1. c
    2. s
    3. %
    4. d
    5. i
+ reproduce the buffer handling of the C library printf function.
