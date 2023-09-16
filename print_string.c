#include "main.h"
/**
 * print_string - for printing a string
 * @args: argument for string
 * Return: no. of characters
 */
int print_string(va_list args)
{
	int i, count = 0;
	char *str;

	i = 0;
	str = va_arg(args, char*);
	if (str == NULL)
		str = "(null)";
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
		count++;
	}
	return (count);
}
