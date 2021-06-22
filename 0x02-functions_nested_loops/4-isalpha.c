#include "holberton.h"

/**
 * _isalpha - Entry point
 * @c: the integer value it receives
 * Description: checks if alphabet
 * Return: 1 if true. 0 if false
 */

int _isalpha(int c)
{
int a = 'a';
int A = 'A';

for (a = 'a'; a <= 'z'; a++)
{
for (A = 'A'; A <= 'A'; A++)
{
if (c == a || c == A)
{
return (1);
}
}
}
return (0);
}
