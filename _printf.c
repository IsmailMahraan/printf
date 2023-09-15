#include "main.h"
/**
 * _printf - function that mimics printf
 * @format: pointer to constant char string
 * Return: return counter
 */
int _printf(const char *format, ...)
{
	if (format)
	{
		int (*listptr)(va_list);
		va_list args;
		int counter = 0, i;

		va_start(args, format);
		i = 0;

		if (format[0] == '%' && format[1] == '\0')
			return (-1);
		while (format != NULL && format[i] != '\0')
		{
			if (format[i] == '%')
			{
				if (format[i + 1] == '%')
				{
					counter += _putchar(format[i]);
					i += 2;
				}
				else
				{
					listptr = get_func(format[i + 1]);
					if (listptr)
						counter += listptr(args);
					else
						counter = _putchar(format[i]) + _putchar(format[i + 1]);
					i += 2;
				}
			}
			else
			{
				counter += _putchar(format[i]);
				i++;
			}
		}
		va_end(args);
		return (counter);
	}
	return (-1);
}
