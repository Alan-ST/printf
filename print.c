#include "holberton.h"
/**
 * _print - prints the format
 * @format: arguments
 * @functions: function's list
 * @args: argurment's list
 */
int _print(const char *format, check_t functions[], va_list args)
{
	int i = 0, j = 0, val = 0;

	while (format != NULL)
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == '\0')
				return (-1);
			if (format[i + 1] == ' ')
				i++;

			while (j < 4)
			{}
		}
	}
}
