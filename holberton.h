#ifndef HOLBERTON_
#define HOLBERTON_

int _printf(const char *format, ...);

struct func
{
	char *fmt;
	void (*format)(char *);
}holder;

#endif
