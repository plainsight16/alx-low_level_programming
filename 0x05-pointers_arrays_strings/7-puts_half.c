#include "main.h"
/**
  * puts_half - prints half of a string
  * @str: String param
*/
void puts_half(char *s)
{
	int length = _strlen(s);
	int half_length = length / 2;

	while (half_length <= length)
	{
		_putchar(*(s + half_length));
		half_length++;
	}
	_putchar('\n');
}
