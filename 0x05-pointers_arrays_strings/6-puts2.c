#include "main.h"

/**
 * puts2 - print chracter of a string
 * @str: character value
 * Description: function tp print every character of a string starting with first character
 */

void puts2(char *str)
{
	int i, a;

	for (i = 0; str[i] != '\0'; i++)
	{
		for (a = 0; a < i; a += 2)
		{
			_putchar(str[a]);
		}
	}
	_putchar('\n');
}
