#include <stdio.h>

/**
 * main - prints the lowercase alphabet in reverse,
 * followed by a new line.
 * Return: Always 0 (Sucess)
*/
int main(void)
{
    char ch = 'z';
    
    for (; ch >= 'a'; ch--)
    {
        putchar(ch);
    }
    putchar(10);
    return (0);
}