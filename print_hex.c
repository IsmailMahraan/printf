#include "main.h"
/**
 * print_hex-prints hexadecimal
 * @u:unsigned int
 * @c:char
 * Return:returns int
 */
int print_hex(unsigned int u, char c)
{
	unsigned int len, powten, j, digit, num;
	int count = 0;
	char diff;

	if (u != 0)
	{
		num = u;
		len = 0;
		if (c)
			diff = 'A' - ':';
		else
			diff = 'a' - ':';
		while (num != 0)
		{
			num /= 16;
			len++;
		}
		powten = 1;
		for (j = 1; j <= len - 1; j++)
			powten *= 16;
		for (j = 1; j <= len; j++)
		{
			digit = u / powten;
			if (digit < 10)
				_putchar(digit + '0');
			else
				_putchar(digit + '0' + diff);
			count++;
			u -= digit * powten;
			powten /= 16;
		}
	}
	else
	{
		_putchar('0');
		return (1);
	}
	return (count);
}

/**
 * print_hexa-prints lowercase hexadecimal
 * @args:va_list type
 * Return:returns int
 */
int print_hexa(va_list args)
{
	return (print_hex(va_arg(args, unsigned int), 0));
}

/**
 * print_hexA-prints uppercase hexadecimal
 * @args:va_list type
 * Return:returns int
 */
int print_hexA(va_list args)
{
	return (print_hex(va_arg(args, unsigned int), 1));
}
