#include "main.h"
/**
 * print_octal-prints octal
 * @args:va_list argument
 * Return: int value
 */
int print_octal(va_list args)
{
	unsigned int num, temp;
	int len = 0, count = 0;

	num = va_arg(args, unsigned int);
	temp = num;

	if (num == 0)
	{
		_putchar('0');
		return (1);
	}

	while (temp != 0)
	{
		temp >>= 3;
		len++;
	}

	while (len--)
	{
		temp = (num >> (len * 3)) & 7;
		_putchar(temp + '0');
	}

	return (count);
}
