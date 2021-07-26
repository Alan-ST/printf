#ifndef HOLBERTON_H
#define HOLBERTON_H
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <limits.h>

/**
 * struct charcheck - 
 */
typedef struct charcheck
{
	char *character;
	int (*f)(va_list);
} check_t;

int _printf(const char *format, ...);

#endif
