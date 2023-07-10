#include "main.h"
/**
 * _isupper - checks for if uppercase letters
 * @c: char to check
 *
 * Return: return 1 for if uppercase, else return 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);

	return (0);
}
