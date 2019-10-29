#include "holberton.h"
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdarg.h>
/**
 *_chars - prints to the stdout a char
 *@args: argument
 *Return: a char
 */
int _chars(va_list args)
{
	char c;

	c = va_arg(args, int);
	return (putchar(c));
}
/**
 *_str - prints string
 *@args: argument
 *Return: a string
 */
int _str(va_list args)
{
	int i = 0;
	char *str = va_arg(args, int);

	while (str[i] != '\0')
	{
		putchar(str[i]);
		i++;
	}
	return (0);
}
