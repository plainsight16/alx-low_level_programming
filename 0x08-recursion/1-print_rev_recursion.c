#include "main.h"
/**
  * _print_rev_recursion - puts a string in reverse
  * @s: char pointer
*/
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(++s);
		_putchar(*s);
	}
}
