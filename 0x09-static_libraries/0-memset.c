#include "main.h"

/**
 * _memset - fills string with constant char b upto n bytes
 * @s: a pointer with the constant byte @b
 * @b: memory area pointer
 * @n: area pointed to by @s
 *
 * Return: pointer to s string
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
