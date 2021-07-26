#include "holberton.h"
/**
 * _print - prints the format
 * @format: arguments
 * @functions: function's list
 * @args: argurment's list
 */
int _print(const char *format, check_t functions[], va_list args)
{
	int i, j, val, prnt = 0;

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			for (j = 0; functions[j].character != NULL; j++)
			{
				if (format[i + 1] == functions[j].character[0])
				{
					val = functions[j].f(args);
					if (val == -1)
						return (-1);
					prnt += val;
					break;
				}
			}
			if (functions[j].character == NULL && format[i + 1] != ' ')
			{
				if (format[i + 1] != '\0')
				{
					putachar(format[i]);
					putachar(format[i + 1]);
					prnt += 2;
				}
				else
					return (-1);
			}
			i += 1;
		}
		else
		{
			putachar(format[i]);
			prnt++;
		}
	}
	return (prnt);
}
