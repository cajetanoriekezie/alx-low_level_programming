#include "main.h"

/**
* print_alphabet - Prints a to z followed
*by a new line
*
*/

void print_alphabet(void)

{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		i_putchar(i);
	}
	_putchar('\n');
}
