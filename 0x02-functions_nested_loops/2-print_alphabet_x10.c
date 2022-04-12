#include "main.h"
/**
 *print_alphabet_x10 - print_alphabet_x10
 */
void print_alphabet_x10(void)
{
	char me;
	int me2;

	for (me2 = 0; me2 < 10; me2++)
	{
		for (me = 'a'; me <= 'z'; me++)
		{
			_putchar(me);
		}
		_putchar('\n');
	}
}
