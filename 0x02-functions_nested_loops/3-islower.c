#include "main.h"

/**
 * _islower - checks for lowercase character
 * @c: takes in character
 * Return: 1 if character c is lowercase and 0 if otherwise
*/
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
