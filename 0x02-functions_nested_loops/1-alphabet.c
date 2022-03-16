#include "main.h"                                                                                                               
                                                                                                                                
/**                                                                                                                             
 * main - prints the alphabet in lowercase, followed by a new line.                                                                              
 * Return: Always (0);                                                                                                          
 */
void print_alphabet(void)
{
        char ch = 'a';

        for (; ch <= 'z'; ch++)
        {
            _putchar(ch);
        }
        _putchar('\n');
}