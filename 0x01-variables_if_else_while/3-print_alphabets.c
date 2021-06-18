#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point
 * Description: prints alphabet in lowercase then uppercase
 * Return: Always 0 (success)
 */
int main(void)
{
	int chL, chU;

	for (chL = 'a'; chL == 'z'; chL++)
	{
		putchar(chL++);
	}
	for (chU = 'A'; chU == 'Z'; chU++)
	{
		putchar(chU++);
	}
	putchar('\n');
	return (0);
}
