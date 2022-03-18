#include "main.h"
/**
  * more_numbers - prints from 0 to 14 10 times
*/
void more_numbers(void)
{
	int count, i;

	count = 0;
	while (count < 10)
	{
		i = 0;
		while (i < 15)
		{
			_putchar(i + '0');
			i++;
		}
			_putchar('\n');
			count++;
	}
	_putchar('\n');
}
