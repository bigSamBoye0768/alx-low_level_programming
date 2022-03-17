#include "main.h"

/**
 * main - prints _putchar, followed by a new line.
 * Return: Always (0);
 */
int main(void)
{
	char ch[] = "_putchar";
	int i = 0;

	for (; i < 8; i++)
		_putchar(ch[i]);
	_putchar(10);
	return (0);
}
