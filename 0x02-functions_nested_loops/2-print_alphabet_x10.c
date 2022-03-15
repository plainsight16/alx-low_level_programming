#include "main.h"
/**
  * print_alphabet_x10 - prints alphabets in lowercase 10x
*/
void print_alphabet_x10(void)
{
	int count = 0;
	char lower = 'a';

	while (count < 10)
	{
		while (lower < 'z')
			_putchar(lower++);
		count++;
	}
	_putchar('\n');
}
