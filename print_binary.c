#include "main.h"
/**
 * print_binary- print unsigned int to binary
 * @b: va_list array
 * Return: return count
 */
int print_binary(va_list b)
{
	unsigned int num = va_arg(b, unsigned int);
	unsigned int count = 0;
	int i;

	if (num == 0)
	{
		_putchar('0');
		return (1);
	}

	for (i = 31; i >= 0; i--)
	{
		if (num & (1 << i))
		{
			_putchar('1');
			count++;
		}
		else if (count > 0)
		{
			_putchar('0');
			count++;
		}
	}

	return (count);
}
