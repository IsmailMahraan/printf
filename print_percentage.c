#include "main.h"
/**
 * print_percentage - print the percentage symbol
 * @args: string  argument
 * Return: return the percentage symbol
 *
 */
int print_percentage(va_list args)
{
	char *str;

	str = "%";
	if (va_arg(args, int) == *str)
	{
		return (*str);
	}
	return (*str);
}
