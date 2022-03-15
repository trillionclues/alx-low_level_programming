#include <unistd.h>
#include "main.h"

/**main - Print alphabet in lowercase
 *
 * Description: function print_alphabet, in lowercase
 * 
 * Returns: returns void (Success)
 */

void print_alphabet(void)
{
char alpha;
for (alpha = 'a'; alpha <= 'z'; alpha++)
{
_putchar (alpha);
}
_putchar ('\n');
}
