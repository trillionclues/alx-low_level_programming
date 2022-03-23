#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 * @n: number of array elements
 * Description: function that reverses ontent of array of integers
 */

void reverse_array(int *a, int n)
{
	int i;
	int temp;

	i = 0;
	n = n - 1;

	while (i < n)
	{
		temp = a[i];
		a[i] = a[n];
		a[n] = temp;
		i++;
		n--;
	}
}
