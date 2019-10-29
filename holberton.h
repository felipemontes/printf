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
	int (*f)(va_list arg);
} holder;
int _chars(va_list arg);
int _str(va_list arg);
#endif
