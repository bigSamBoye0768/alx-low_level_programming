#include <stdio.h>

/**
 * main - prints all the numbers of base 16 in lowercase,
 * followed by a new line
 * Return: Always 0 (Sucess);
*/
int main(void)
{
        int n = 48;
        char ch = 'a';

        for (; n <= 57; n++)
        {
            putchar(n);
        }for (; ch <= 'f'; ch++)
        {
            putchar(ch);
        }
        putchar(10);
        
        return (0);
}