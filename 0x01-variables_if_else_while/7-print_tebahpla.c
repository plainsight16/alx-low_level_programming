#include <stdio.h>
/**
	* main - Entry point
	* Description: prints lowercase alphabets in reverse
	* Return: 0;
*/
int main(void)
{
	char lower = 'z';

	while (lower >= 'a')
	{
		putchar(lower--);
	}
	putchar('\n');
	return (0);
}
