#include "holberton.h"

/**
 * print_alphabet_x10 - Entry point
 * Description: prints alphabets in lowercase 10 times
 * Return: void
 */

void print_alphabet_x10(void)
{
int i = 0;
char a = 'a';

for (i = 0; i < 10; i++)
{
for (a = 'a'; a <= 'z'; a++);
}
{
_putchar(a);
}
_putchar('\n');
}
