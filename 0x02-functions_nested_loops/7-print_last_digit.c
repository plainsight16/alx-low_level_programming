#include "main.h"
/**
  * print_last_digit - prints last digit of a number
  * @num: Number param
  * Return: lastdigit
*/
int print_last_digit(int num)
{
	int result = num % 10;

	if (num < 0)
		result = -1 * (num % 10);
	_putchar(result + '0');
	return (result);
}
