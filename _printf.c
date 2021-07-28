#include "holberton.h"
/**
 * _printf - produces output according to a format
 * @format: string
 * Return: character printed
 */
int _printf(const char *format, ...)
{
	int i;
	va_list strls;
	check_t funls[] = {
		{"c", p_char},
		{"s", p_string},
		{"%", p_percent},
		{"d", p_int},
		{"i", p_int}
	};

	/*Returns Error*/
	if (format == NULL)
		return (-1);
	
	/*Calls*/
	va_start(strls, format);
	i = print(format, funls, strls);
	va_end(strls);
	return (i);
}
