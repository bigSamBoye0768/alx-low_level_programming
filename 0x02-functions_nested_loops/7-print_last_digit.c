#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: takes in an interger
 * Return: Always 0 (sucess)
*/
int print_last_digit(int n)
{
	int ln = n % 10;

	if (n < 0)
	{
		ln = ln * -1;
	}
	_putchar('0' + ln);
	return (ln);
}
