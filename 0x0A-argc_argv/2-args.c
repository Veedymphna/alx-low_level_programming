#include <stdio.h>
#include "main.h"

/**
 * main - prints all arguments it recieves
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: always 0 (success)
 */

int main(int argc, char *argv[])
{
	int a;

	for (a = 0;  a < argc; a++)
	{
		printf("%s\n", argv[a]);
	}
	return (0);
}
