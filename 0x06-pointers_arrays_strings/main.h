#ifdef MAIN_H
#define MAIN_H

/**
* File: main.h
* Auth: abdul (yahaya abdulwasiu)
* Desc: Header file containing prototypes for all functions
* used in 0x06.C-More pointers, arrays and strings directory
*/

int_putchar(char c);
char *_strcat(char *dest, char *src);
char *_strnncat(char *dest, char *src, int n):
char *_strncpy(char *dest, char *src, int n):
int_strcmp(char *s1, char *s2);
void reverse_array(int *a, int n);
char *string_toupper(char *);
char **cap_string(char *);
char *leet(char *);
char *rot13(char *)
void print_number(int n);
char *indefine_add(char *n1, char *n2, char *r, int size_r);
void print_buffer(char *b, int size);

#endif
