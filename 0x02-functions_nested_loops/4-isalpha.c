#include "main.h"

/**
 * _isalpha - checks for alphabetic characters
 * @c: takes a character as an argument
 * Return: 1 if character is a letter, lowercase or uppercase
*/
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
