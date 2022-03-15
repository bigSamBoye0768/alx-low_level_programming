#include <stdio.h>

/**
 * main - print all letters in lowercase, followed by a new line
 * except q and e
 * Return: Always 0 (Sucess)
*/

int main(void)
{
    int ch;

    for (ch = 'a'; ch <= 'z'; ch++)
    {
        if (ch != 'q' && ch != 'e')
        {
            putchar(ch);
        }
    }
    putchar('\n');
    return (0);
}