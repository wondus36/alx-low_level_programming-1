#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point
 * Description: Print base 16 numbers
 * Return: Always 0 (success)
 */
int main(void)
{
	int i;

	for (i = 0; i <= 16; i++)
	{
		putchar(i + '0');
	}
	putchar('\n');
	return (0);
}
