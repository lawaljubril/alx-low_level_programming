#include "main.h"
#include <stdio.h>

/**
 * wildcmp - check if strings could be considered identical
 * @s1: base address for string.
 * @s2: base address for string.
 * Return: 1 if are considered identical.
 */
int wildcmp(char *s1, char *s2)
{
		return (str_checker(s1, s2, 0, 0));
}
