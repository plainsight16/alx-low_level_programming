#include "main.h"
/**
	* print_alphabet - prints alphbaets in lowercase
*/
void print_alphabet(void)
{
	char lower = 'a';

	while (lower <= 'z')
	{
		_putchar(lower++);
	}
	_putchar('\n');
}
