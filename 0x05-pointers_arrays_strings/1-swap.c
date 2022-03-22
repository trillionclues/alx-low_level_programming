#include "main.h"

/** swap_int - swaps the value of two integers
 * @n: Integer value
 * @b: integer value
 *
 * Description: function to swap value of two integers
 */

void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
