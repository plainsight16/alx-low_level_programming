#include <stdio.h>
/**
	* main - Entry point
	* Description: print alphabets in lowercase except q and e
	* Return: 0
*/
int main(void)
{
	char lower = 'a';

	while (lower <= 'z')
	{
		if (lower != 'e' && lower != 'q')
			putchar(lower);
		lower++;
	}
	putchar('\n');
	return (0);
}
