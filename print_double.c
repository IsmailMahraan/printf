#include "main.h"
/**
 * print_double - For printing decimal
 * @args: receives decimals as argument
 * Return: the counter
 */
int print_double(va_list args)
{
	unsigned int abs, numcounter, counter = 0;
	int n = va_arg(args, int);

	if (n < 0)
	{
		counter += _putchar('-');
		abs = (unsigned int)(-n);
	}
	else
	{
		abs = (unsigned int)n;
	}
	numcounter = 1;
	while (abs / numcounter >= 10)
	{
		numcounter *= 10;
	}
	while (numcounter > 0)
	{
		counter += _putchar('0' + (abs / numcounter));
		abs %= numcounter;
		numcounter /= 10;
	}
	return (counter);
}
