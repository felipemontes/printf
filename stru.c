#include "holberton.h"
/**
 * structure - structure to find type
 *
 */
int (*structure(char letter))(va_list args)
{
	unsigned int i = 0;

	holder agmt[] = {
		{"c", _chars},
		{"d", _inter},
		{NULL, NULL}
	};

	while (agmt[i].fmt != NULL)
	{
		if (letter == agmt[i].fmt[0])
		{
			return (agmt[i].f);
		}
		i++;
	}
	return (NULL);

}
