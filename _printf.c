#include "holberton.h"
/**
 * _printf - produces output according to a format
 * @format: string
 * Return: characters printed
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
		{"i", p_int},
		{NULL, NULL}
	};

	/*Returns Error*/
	if (format == NULL)
		return (-1);
	/*Calls print function*/
	va_start(strls, format);
	i = print(format, funls, strls);
	va_end(strls);
	return (i);
}
