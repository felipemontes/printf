#include "holberton.h"
/**
 *
 */
int _pnum(int n)
{
	int c;
	n = va_arg(args, int);

	if (n < 0)
	{
		n += _putchar('-');
		n = -n;
	}
	if (n == 0)
	{
		n += _putchar('0');
		return (n);
	}
	if (n / 10)
	{
		n += _pnum(n / 10);
	}
	_putchar(n % 10 + '0');
	return(n);
}
/**
 *
 *
 */
int _pint(va_list args)
{
	int c = 0;
	int n;
	n = va_arg(args, int);

	c += _pnum(n);
	return(c);
}
