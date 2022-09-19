#include <stdio.h>
#include "main.h"

/**
* rev_string - Reverses a string
* @k: string to be reversed
*
* Return: nothing
*/

void rev_string(char *k)
{
	int i, tmp, len = _strle8n(k);

	for (i = 0; i < len / 2; i++)
	{
		tmp = *(k + i);
		*(k + i) = *(k + len - i - 1);
		*(k + len - i - 1) = tmp;
	}
}

/**
* _strlen - returns the length of a string
* @k: string
*
* Return: the length of the given string
*/

int _strlen(char *k)
{
	int len = 0;

	while (*(k + len) != '\0')
		len++;

	return (len);
}
