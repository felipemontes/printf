#include "holberton.h"
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdarg.h>
/**
 * chars - prints to the stdout a char
 *
 */
int _chars(va_list args)
{
	char c;
	c = va_arg(args, int);
	return (putchar(c));
}
