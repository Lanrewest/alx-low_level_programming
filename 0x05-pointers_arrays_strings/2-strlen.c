#include "main.h"

/**
 *_strlen - returns the length of a string
 * @g: string
 *Return: returns length as integer;
 */

int _strlen(char *g)
{
	int len = 0;

	while (*(g + len) != '\0')
		len++;

	return (len);
}
