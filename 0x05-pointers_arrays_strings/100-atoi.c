#include "main.h"

/**
* _atoi - converts a string to an int
* @t: the string to be changed
*
* Return: the converted int
*/

int _atoi(char *t)
{
	int sign = 1;
	unsigned int num = 0;

	do {
		if (*t == '-')
			sign *= -1;
		else if (*t >= '0' && *t <= '9')
			num = num * 10 + (*t - '0');
		else if (num > 0)
			break;
	} while (*t++);

	return (num * sign);
}
