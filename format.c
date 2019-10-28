#include "holberton.h"
#include <stdio.h>
#include <string.h>
#include <unistd.h>
/**
 * chars - prints to the stdout a char
 *
 */
int _chars(va_list arg)
{
	char c;
	c = va_arg(arg, int);
	return (write(1, &c, sizeof(char)));
}
