sami task 6
cat > main.h

                                                                                                           

#ifndef MAIN_H                                                                                                                    

#define MAIN_H                                                                                                                    

                                                                                                                                       

/**                                                                                                                                    

 * File: main.h                                                                                                                    

 * Auth: sam tech(Samuel birhanu)                                                                                                            

 * Desc: Header file containing prototypes for all functions                                                                            

 *       used in the 0x06. C - More pointers, arrays and strings directory.

 */                                                                                                                                    

                                                                                                                                       

int _putchar(char c);                                                                                                                  

char *_strcat(char *dest, char *src);                                                                                                  

char *_strncat(char *dest, char *src, int n);                                                                                          

char *_strncpy(char *dest, char *src, int n);                                                                                          

int _strcmp(char *s1, char *s2);                                                                                                        

void reverse_array(int *a, int n);                                                                                                      

char *string_toupper(char *);                                                                                                          

char *cap_string(char *);                                                                                                              

char *leet(char *);                                                                                                                    

char *rot13(char *);                                                                                                                    

void print_number(int n);                                                                                                              

char *infinite_add(char *n1, char *n2, char *r, int size_r);                                                                            

void print_buffer(char *b, int size);                                                                                                  

                                                                                                                                       

#endif


















cat > _putchar.c


#include "main.h"                                                                                                                  

#include <unistd.h>                                                                                                                    

                                                                                                                                       

/**                                                                                                                                    

 * _putchar - writes the character c to stdout                                                                                          

 * @c: The character to print                                                                                                          

 *                                                                                                                                      

 * Return: On success 1.                                                                                                                

 * On error, -1 is returned, and errno is set appropriately.                                                                            

 */                                                                                                                                    

int _putchar(char c)                                                                                                                    

{                                                                                                                                      

        return (write(1, &c, 1));                                                                                                      

}                              






























#include "main.h"                                                                                                                    

                                                                                                                                     

/**                                                                                                                                  

 * strcat - Concatenates the string pointed to by @src, including the x                                                    

 *          null byte, to the end of the string pointed to by @dest.                                                                

 * @dest: A pointer to the string to be concatenated upon.                                                                          

 * @src: The source string to be appended to @dest.                                                                                  

 *                                                                                                                                  

 * Return: A pointer to the destination string @dest.                                                                                

 */                                                                                                                                  

char *_strcat(char *dest, const char *src)                                                                                            

{                                                                                                                                    

        int index = 0, dest_len = 0;                                                                                                

                                                                                                                                     

        while (dest[index++])                                                                                                        

                dest_len++;                                                                                                          

                                                                                                                                     

        for (index = 0; src[index]; index++)                                                                                        

                dest[dest_len++] = src[index];                                                                                      

                                                                                                                                     

        return (dest);                                                                                                              

}























#include "main.h"                                                                                                                    

                                                                                                                                     

/**                                                                                                                                  

 * _strncat - Concatenates two strings using at most                                                                                

 *            an inputted number of bytes from src.                                                                                  

 * @dest: The string to be appended upon.                                                                                            

 * @src: The string to be appended to dest.                                                                                          

 * @n: The number of bytes from src to be appended to dest.                                                                          

 *                                                                                                                                  

 * Return: A pointer to the resulting string dest.                                                                                  

 */                                                                                                                                  

char *_strncat(char *dest, char *src, int n)                                                                                        

{                                                                                                                                    

        int index = 0, dest_len = 0;                                                                                                

                                                                                                                                     

        while (dest[index++])                                                                                                        

                dest_len++;                                                                                                          

                                                                                                                                     

        for (index = 0; src[index] && index < n; index++)                                                                            

                dest[dest_len++] = src[index];                                                                                      

                                                                                                                                     

        return (dest);                                                                                                              

}






















#include "main.h"                                                                                                                    

                                                                                                                                     

/**                                                                                                                                  

 * _strncpy - Copies at most an inputted number                                                                                      

 *            of bytes from string src into dest.                                                                                    

 * @dest: The buffer storing the string copy.                                                                                        

 * @src: The source string.                                                                                                          

 * @n: The maximum number of bytes to copied from src.                                                                              

 *                                                                                                                                  

 * Return: A pointer to the resulting string dest.                                                                                  

 */                                                                                                                                  

char *_strncpy(char *dest, char *src, int n)                                                                                        

{                                                                                                                                    

        int index = 0, src_len = 0;                                                                                                  

                                                                                                                                     

        while (src[index++])                                                                                                        

                src_len++;                                                                                                          

                                                                                                                                     

        for (index = 0; src[index] && index < n; index++)                                                                            

                dest[index] = src[index];                                                                                            

                                                                                                                                     

        for (index = src_len; index < n; index++)                                                                                    

                dest[index] = '\0';                                                                                                  

                                                                                                                                     

        return (dest);                                                                                                              

}



















#include "main.h"                                                                                                                    

                                                                                                                                     

/**                                                                                                                                  

 * _strcmp - Compares pointers to two strings.                                                                                      

 * @s1: A pointer to the first string to be compared.                                                                                

 * @s2: A pointer to the second string to be compared.                                                                              

 *                                                                                                                                  

 * Return: If str1 < str2, the negative difference of the first unmatched char                                                      

 *         If str1 == str2, 0.                                                                                                      

 *         If str1 > str2, the positive difference of the first unmatched char                                                      

 */                                                                                                                                  

int _strcmp(char *s1, char *s2)                                                                                                      

{                                                                                                                                    

        while (*s1 && *s2 && *s1 == *s2)                                                                                            

        {                                                                                                                            

                s1++;                                                                                                                

                s2++;                                                                                                                

        }                                                                                                                            

                                                                                                                                     

        return (*s1 - *s2);                                                                                                          

}
























#include "main.h"                                                                                                                    

                                                                                                                                     

/**                                                                                                                                  

 * reverse_array - Reverses the content of an array of integers.                                                                    

 * @a: The array of integers to be reversed.                                                                                        

 * @n: The number of elements in the array.                                                                                          

 */                                                                                                                                  

void reverse_array(int *a, int n)                                                                                                    

{                                                                                                                                    

        int tmp, index;                                                                                                              

                                                                                                                                     

        for (index = n - 1; index >= n / 2; index--)                                                                                

        {                                                                                                                            

                tmp = a[n - 1 - index];                                                                                              

                a[n - 1 - index] = a[index];                                                                                        

                a[index] = tmp;                                                                                                      

        }                                                                                                                            

}



























#include "main.h"                                                                                                                    

                                                                                                                                     

/**                                                                                                                                  

 * string_toupper - Changes all lowercase letters                                                                                    

 *                  of a string to uppercase.                                                                                        

 * @str: The string to be changed.                                                                                                  

 *                                                                                                                                  

 * Return: A pointer to the changed string.                                                                                          

 */                                                                                                                                  

char *string_toupper(char *str)                                                                                                      

{                                                                                                                                    

        int index = 0;                                                                                                              

                                                                                                                                     

        while (str[index])                                                                                                          

        {                                                                                                                            

                if (str[index] >= 'a' && str[index] <= 'z')                                                                          

                        str[index] -= 32;                                                                                            

                                                                                                                                     

                index++;                                                                                                            

        }                                                                                                                            

                                                                                                                                     

        return (str);                                                                                                                

}
