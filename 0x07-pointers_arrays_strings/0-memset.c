/*
 * File: 0-memset.c
 * Auth: not
 */

#include "main.h"

/**
 * _memset - Fills the first n bytes of the memory area
 * pointed to by @s with the constant byte @c
 * @s: A pointer to the memory area to be filled.
 * @b: constant byte
 * @n: The number of bytes to be filled.
 * description _memset: over there
 *
 * Return: A pointer to the filled memory area @s.
 *
 */
char *_memset(char *s, char b, unsigned int n)

{
	unsigned int i;


	for (i = 0; i < n; i++)
	{
		*(s + i) = b; /*add 1 position s*/

	}

	return (s);
}
