#include "holberton.h"
/**
 *
 *
 */
int (*structure(char letter))(va_list args)
{
	unsigned int i = 0;

	holder agmt[] = {
		{"c", _chars},
		{"s", _str},
		{"d", _inter},
		{"i", _inter},
		{NULL, NULL}
	};

	while (agmt[i].fmt != NULL)
	{
		if (letter == agmt[i].fmt[0])
			return(agmt[i].f);
		i++;
	}
	return(NULL);

}
