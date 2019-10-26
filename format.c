#include "holberton.h"
#include <stdio.h>
#include <string.h>
/**
 * chars - prints to the stdout a char
 *
 */
void _chars(va_list arg)
{
	write(1, &arg, sizeof(char));
}
/**
 * strs - prints a string to the stdout
 *
 */
void _strs(va_list arg)
{
	write(1, &arg, strlen(format));
}
/**
 * _prct - prints a special char to stdout
 *
 *
 */
void _prct(va_list arg)
{
	write(1, &arg, sizeof(char));
}
