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
	int str;
	va_list arg;

	va_start(arg, format);

	holder format[] = {
		{"c", _chars}
		{"s", _strs}
	}


	va_end (arg);

	return(str);
}
