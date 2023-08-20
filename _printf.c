#include "main.h"

/**
 * _printf - Custom printf function
 * @format: The format string
 * @...: Variadic arguments
 * Return: Number of characters printed
 */
int _printf(const char *format, ...)
{
	int i;
	va_list args;

	va_start(args, format);
	for (i = 0; format[i]; i++)
	{
		while (format[i] != '%')
		{
			if (format[i] == '\0')
				return (i);
			_putchar(format[i]);
			i++;
		}
		i++;
		switch (format[i])
		{
			case 'c':
				_putchar(va_arg(args, int));
				break;
			case 's':
				_puts(va_arg(args, char *));
				break;
			case '%':
				_putchar(_putchar(format[i]));
				break;
			case 'd':
				print_number(va_arg(args, int));
				break;
			case 'i':
				print_unsignedint(va_arg(args, int));
				break;
			default:
				_putchar(format[i]);
				break;
		}
	}
	va_end(args);
	return (i);
}
