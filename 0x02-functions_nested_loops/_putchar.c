#include <stdio.h>
#include "main.h"
/**
 * _putchar _writes the character c to stdout
 * 0c: the character to print
 *
 * Return: On succes 1.
           On error, -1 is returned, and errorn is set approprietely
*/
int _putchar(char c);
{
	return(write(1, &c 1));
}
