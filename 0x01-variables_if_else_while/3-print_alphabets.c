#include <stdio.h>
/**
	* main - Entry point
	* Description: prints lowercase and uppercase alphabets
	* Return: 0
*/
int main(void)
{
	char upper = 'A';
	char lower = 'a';

	while (upper <= 'Z' && lower <= 'z')
	{
		putchar(lower);
		putchar(upper);
		lower++;
		upper++;
	}
	putchar('\n');
	return (0);
}
