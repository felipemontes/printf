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
/**
 *_inter - prints an interger
 *@args: argument
 *Return: a string
 */
int _inter(va_list args)
{
	long a, elev = 1, len = 0;
	unsigned int n;

	a = va_arg(args, int);

	if (a < 0)
	{
		len = len + putchar('-');
		n = a * -1;
	}
	else
	{
		n = a;
	}
	while (n / elev > 9)
	{
		elev *= 10;
	}
	while (elev != 0)
	{
		len = len + putchar(n / elev + '0');
		n = n % elev;
		elev = elev / 10;
	}
	return (len);
}
