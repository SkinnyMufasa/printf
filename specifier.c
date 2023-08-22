#include "main.h"

/**
 * spec_conditions - execute put function according to set condition
 * @specifier: specifies which put function to use
 * @len: increment the argument lenght into the initial output
 * @argv: get argument from _printf
 * Return: void
 */

void spec_conditions(char specifier, int *len, va_list argv)
{
	if (specifier == 'c')
		(*len) += _putchar(va_arg(argv, int));
	else if (specifier == 's')
		(*len) += print_string(va_arg(argv, char *));
	else if (specifier == 'd' || specifier == 'i')
		(*len) += print_number(va_arg(argv, int));
	else
		(*len) += _putchar(specifier);
}
