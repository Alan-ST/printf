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
   int i = 0, j, fval, val = 0;

	/*Loops until the string end*/
   while (format[i] != '\0')
   {
	   /*Detect a specifier*/
       if (format[i] == '%')
       {
		   /*Check to the list of functions*/
           while (functions[j].character != NULL)
			{
				/*Calls the function corresponding to the specifier*/
				if (format[i + 1] == functions[j].character[0])
				{
					fval = functions[j].f(args);
					if (fval == -1)
						return (-1);
					val += fval; 
					break;
				}
                j++;
			}
			/**/
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
	   /**/
	   j = 0;
       i++;
   }
   return (val);
}
