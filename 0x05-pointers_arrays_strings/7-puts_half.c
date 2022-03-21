#include "main.h"
/**
  * puts_half - prints half of a string
  * @str: String param
*/
void puts_half(char *s)
{
	int length;
	int half_length;
	int count = 0;

	while (*s != '\0')
	{
		count++;
		s++;
	}
	length = count;
	if (length % 2 != 0)
		length += 1;
	half_length = length / 2;
	s = s - half_length;
	while (half_length <= length)
	{
		_putchar(*s);
		s++;
		half_length++;
	}
	_putchar('\n');
}
