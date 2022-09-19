#include <stdio.h>
#include <string.h>
#include "main.h"

/**
*print_rev - Prints a string in reverse order
*@k: String to reverse
*Return: Nothing
*/

void print_rev(char *k)
{
	int len = strlen(k);

	while (len--)
		putchar(*(k + len));
	putchar(10);
}
