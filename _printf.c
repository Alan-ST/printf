#include "holberton.h"
/**
 * _printf - produces output according to a format
 * @format: string
 * Return: character printed
 */
int _printf(const char *format, ...)
{
	int i;
	va_list charls;
	check_t funls[] = {
		{"c", p_char},
		{"s", p_string},
		{"%", p_percent},
		{"d", p_int},
		{"i", p_int}
	};

	if (format == NULL)
		return (-1);
	
	va_start(charls, format);
	i = print(format, funls, charls);
	va_end(charls);
	return (i);
}
