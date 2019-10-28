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
	int i;
	int (*x)(va_list);
	va_list args;

	i = 0;
	va_start(args, format);

	while (format && format[i])
	{
		if (format[i] == '%' && format[i + 1] == '%')
		{
			putchar(format[i + 1]);
			i++;
		}
		else if (format[i] == '%')
		{
			x = structure(format[i + 1]);
			x(args);
			i++;
		}
		else
		{
			putchar(format[i]);
		}
		i++;
	}
	va_end(args);
	return (0);
}
