#include <stdio.h>

/**
 * main - print all letters in lowercase, followed by a new line
 * except q and e
 * Return: Always 0 (Sucess)
*/

int main(void)
{
    int ch = 97;

    for (; ch <= 122; ch++)
    {
        if (ch != 101 && ch != 'q')
        {
            putchar(ch);
        }
    }
    putchar(10);

    return (0);
}