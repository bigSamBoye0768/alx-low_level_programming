#include <stdio.h>
#include "main.h"

/**
 * main - prints all arguments passed to the main function per line
 * @argc: counts the number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0 (Sucess)
 */
int main(int argc, char *argv[])
{
	int i;

	for(i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);

	}

	return (0);
}
