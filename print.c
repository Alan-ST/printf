#include "holberton.h"
/**
 * print - prints the format
 * @format: arguments
 * @functions: function's list
 * @args: argurment's list
 * Return: characters printed
 */
int print(const char *format, check_t functions[], va_list args)
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

			while (j < 3)
			{
				if (format[i + 1] == functions[j].character[0])
				{
					val += functions[j].f(args);
					i++;
					break;
				}
				if (j == 2 && format[i + 1] != functions[j].character[1])
				{
					if (!format[i + 1])
						return (-1);
					else
						val += putachar(format[i]);
				}
				j++;
			}
		}
		else
		{
			putachar(format[i]);
			val++;
		}
		i++;
		j = 0;
	}
	return (val);
}
