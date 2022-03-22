include "main.h"

/**
 * _strlen - return length of string
 * @s: String value
 * Description: function to return length of a string
 *
 * Return: i value
 */

int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] ! = 0; i++);

	return (i);
}
