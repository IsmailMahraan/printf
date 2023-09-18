#include "main.h"
/**
 * get_func-function that returns function pointer
 * @input: char variable
 * Return: return function pointer
 */

int (*get_func(char input))(va_list)
{
	int i = 0;
	handler types[] = {
	{"c", print_char},
	{"s", print_string},
	{"%", print_percentage},
	{"d", print_double},
	{"i", print_integer},
	{"b", print_binary},
	{"u", print_U},
	{"o", print_octal},
	{"x", print_hexa},
	{"X", print_hexA},
	{"p", print_p},
	{"R", print_rot},
	{NULL, NULL}
};

	while (types[i].type)
	{
		if (input == types[i].type[0])
			return (types[i].funcptr);
		i++;
	}
	return (NULL);
}
