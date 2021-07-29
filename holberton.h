#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <limits.h>
#include <unistd.h>

/**
 * struct charcheck - Corresponds a character to a function
 * @character: Specifier
 * @f: Function
 */
typedef struct charcheck
{
	char *character; 
	int (*f)(va_list);
} check_t;

/*Main functions*/
int _printf(const char *format, ...);
int print(const char *format, check_t functions[], va_list args);
int p_char(va_list args);
int p_string(va_list args);
int p_percent(va_list args);
int p_int(va_list args);
/*Support functions*/
int putachar(char c);
int p_num(va_list args);

#endif
