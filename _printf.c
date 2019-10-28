#include "holberton.h"
#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>
#include <string.h>
/**
 * _printf - function to print any format
 * @format: string
 *
 * Return: the number of chars printed
 */
int _printf(const char *format, ...)
{
	holder agmt[] = {
		{"c", _chars},
		{NULL, NULL}
	};

	int i, n;
	va_list arg;

	i = 0;
	n = 0;
	va_start(arg, format);

	while (format && format[i])
	{
		if (format[i] == '%' && format[i + 1] != '%'
		    && format[i + 1] == *(agmt[0].fmt))
		{
			n += agmt[0].f(arg);
		}
		i++;
	}
	va_end (arg);
	return (n);
}
