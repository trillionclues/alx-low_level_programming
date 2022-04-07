#include "main.h"

/**
 * _memset - copy char
 * @s: string
 * @b: input
 * @n: bytes
 *
 * Return: string
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}

/**
 * _calloc - Allocates memory for an array using malloc
 * @nmemb: number of elements
 * @size: the byte size of an array element
 *
 * Return: If nmemb = 0, size = 0, or the function fails - NULL
 * Otherwise - a pointer to the allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *mem;
	char *filler;
	unsigned int index;

	if (nmemb == 0 || size == 0)
		return (NULL);
	mem = malloc(size * nmemb);

	if (mem == NULL)
		return (NULL);

	filler = mem;

	for (index = 0; index < (size * nmemb); index++)
		filler[index] = '\0';

	return (mem);
}
