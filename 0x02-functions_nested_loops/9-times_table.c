#include "main.h"
/**
  * times_table - prints the 9 times table
*/
void times_table(void)
{
	int count = 0;
	int multiplier;
	int result;

	while (count < 10)
	{
		multiplier = 0;

		while (multiplier < 10)
		{
			result = count * multiplier;
			_putchar(result + '0');
			if (multiplier < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			multiplier++;
		}
		_putchar('\n');
		count++;
	}
}
