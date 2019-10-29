#ifndef HOLBERTON_
#define HOLBERTON_
#include <stdlib.h>
#include <stdarg.h>
int _printf(const char *format, ...);
int (*structure(char letter))(va_list);
/**
 * struct func - structure to find the typo of var
 * @fmt: character
 * @f: function
 *
 */
typedef struct func
{
	char *fmt;
	int (*f)(va_list args);
}
holder;
int _chars(va_list args);
int _str(va_list args);
int _inter(va_list args);
int _putchar(char c);
#endif
