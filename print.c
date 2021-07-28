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
	int i, j, v, val = 0;

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			for (j = 0; functions[j].character != NULL; j++)
			{
				if (format[i + 1] == functions[j].character[0])
				{
					v = functions[j].f(args);
					if (v == -1)
						return (-1);
					val += v;
					break;
				}
			}
			if (functions[j].character == NULL && format[i + 1] != ' ')
			{
				if (format[i + 1] != '\0')
				{
					putachar(format[i]);
					putachar(format[i + 1]);
					val += 2;
				}
				else
					return (-1);
			}
			i += 1;
		}
		else
		{
			putachar(format[i]);
			val++;
		}
	}
	return (val);
}
