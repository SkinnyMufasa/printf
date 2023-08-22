#include "main.h"
#include <stdarg.h>

/**
 * _printf - produces output according to format
 * @format: character format
 * Return: outputted character
 */
int _printf(const char *format, ...)
{	int i = 0, count = 0;
	va_list args;
	char *str;

	va_start(args, format);
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);
	while (format && format[i])
	{
		if (format[i] != '%')
		{
			_putchar(format[i]);
			count++;
		} else
		{
			i++;
			if (format[i] == '\0')
			return (-1);
		switch (format[i])
			{
			case 'c':
				count += _putchar(va_arg(args, int));
				break;
			case 's':
				str = va_arg(args, char *);
				count += print_string(str);
				break;
			case '%':
				_putchar('%');
				count++;
				break;
			case 'd':
			case 'i':
				count += print_number(va_arg(args, int));
				break;
			default:
				_putchar('%');
				_putchar(format[i]);
				count += 2;
				break; }
	} i++; }
	va_end(args);
	return (count);
}

