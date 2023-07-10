#include "main.h"
/**
 * _strpbrk - entry point
 * @s: input value
 * @accept: input value
 * Return: always 0 (success)
 */
char *_strpbrk(char *s, char *accept)
{
	int p;

	while (*s)
	{
		for (p = 0; accept[p]; p++)
		{
			if (*s == accept[p])
			return (s);
		}
	s++;
	}

	return ('\0');
}
