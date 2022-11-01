#include "main.h"

/*
 * _memset - function fills the first @n bytes of the memory area pointed
 * to by @s with the constant byte @b
 * @s: a pointer with the constant byte @b
 * @b: memory area pointer
 * @n: number of bytes
 *
 * Return; a pointer to the memory @s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	Return(s);
}
