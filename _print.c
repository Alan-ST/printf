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

	/*checks the format string*/
	for (i = 0; format[i] != '\0'; i++)
	{
		/*checks the format specifier*/
		if (format[i] == '%')
		{
			/*search up the right function*/
			for (j = 0; functions[j].character != NULL; j++)
			{
				if (format[i + 1] == functions[j].character[0])
			}
		}
		else
	}
}
