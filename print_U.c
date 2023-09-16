#include "main.h"
/**
* print_U - function that prints unsigned number
* @args: var list type
* Return: returns int
*/
int print_U(va_list args)
{
	char buffer[12];
	int g;
	int counter;
	unsigned int s = va_arg(args, unsigned int);

	if (s == 0)
	{
		_putchar('0');
		return (1);
	}
	g = 11;
	buffer[g--] = '\0';

	while (s != 0)
	{
		buffer[g--] = s % 10 + '0';
		s /= 10;
	}
	counter = 0;
	while (buffer[++g] != '\0')
	{
		_putchar(buffer[g]);
		counter += 1;
	}

	return (count);
}
