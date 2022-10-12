#ifindef FUNCTION_POINTERS_H
#define FUNCTION_POINTERs_H

void _putchar(char *c);
void print_name(char *name, void (*f)(char *));
void array_interator(int *array, size_t size, void (*action)(int));
int int_index(int *array, int size, int (*cmp)(int));

#endif /*FUNCTION_POINTERS_H*/

0-print_name

/**
*print_name - prints a name.
*@name: pointer to name
*@f: function pointer.
*
*Return: void.
*/

void print_name(char *name, void (*f)(char *))
{
    if (name && f)
        f(name);
}