#include "main.h"
/**
 * print_alphabet_x10 - prints the alphabet 10 times.
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	char ch;
	int i;
	int j;
	while (i < 10)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
		{
			_putchar(ch);
		}
		_putchar('\n');
		i++;
	}
}
