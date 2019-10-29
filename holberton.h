#ifndef HOLBERTON_
#define HOLBERTON_
#include <stdlib.h>
#include <stdarg.h>
int _printf(const char *format, ...);
int (*structure(char letter))(va_list);
/**
 *func - structure for arguments
 */
typedef struct func
{
	char *fmt;
	int (*f)(va_list arg);
}
holder;
int _chars(va_list args);
int _str(va_list args);
int _pnum(int n);
int _print(va_list args);
int _putchar(char c);
#endif
