#include "main.h"
/**
  * puts2 - prints every other character of a string
  * @s: string pointer
*/
void puts2(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		if (i % 2 == 0)
		{
			_putchar(*s);
		}
		s++;
		i++;
	}
	_putchar('\n');
}
