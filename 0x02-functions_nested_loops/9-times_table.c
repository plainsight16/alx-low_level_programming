#include "main.h"
/**
  * times_table - prints the 9 times table
*/
void times_table(void)
{
	int count = 0;

	while (count < 10)
	{
		int multiplier = 0;

		while (multiplier < 10)
		{
			_putchar((count * multiplier) + '0');
			_putchar(',');
			_putchar(' ');
			multiplier++;
		}
		_putchar('\n');
		count++;
	}
}
