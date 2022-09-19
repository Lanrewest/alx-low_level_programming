#include <stdio.h>
#include "main.h"

/**
 *_puts - prints a string
 * @strg: string to print
 *
 * Description: prints a string
 * On success: returns no error
 */

void _puts(char *strg)
{
	int i = 0;

	while (*(strg + i) != '\0')
	{
		putchar(*(strg + i));
		i++;
	}
	putchar(10);
}
