#include "main.h"
/**
  * jack_bauer - prints every minute of the day of Jack Bauer
*/
void jack_bauer(void)
{
	int H = 0;
	int M;

	while (H < 24)
	{
		M = 0;

		while (M < 60)
		{
			_putchar((H / 10) + '0');
			_putchar((H % 10) + '0');
			_putchar(':');
			_putchar((M / 10) + '0');
			_putchar((M % 10) + '0');
			_putchar('\n');
			M++;
		}
		H++;
	}
}
