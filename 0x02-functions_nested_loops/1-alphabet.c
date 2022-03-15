#include <stdio>
#include "main.h"

/**main - Print alphabet in lowercase
 *
 * Description: function that prints the alphabet, in lowercase
 * Returns: returns 0 (Success)
 */

void print_alphabet(void)
{
	char alpha;
	for(alpha = 'a'; alpha <= 'z'; alpha++)
	{
		_putchar(alpha)
	}
	_putchar ('\n')
}
