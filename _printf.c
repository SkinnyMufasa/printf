#include "main.h"

/**
 * _printf - function that produces output according to format
 * @format: string
 * Return: output length
 */

int _printf(const char *format, ...)
{
	int i, count = 0;
	va_list args;

	va_start(args, format);
	for (i = 0; format[i]; i++)
	{
		while (format[i] != '%')
		{
			if (format[i] == '\0')
				return (i);
			_putchar(format[i]);
			count++;
			i++;
		}
		if (format[i] == '%')
		{
			i++;
			check_fmt(args, format[i]);
		}
	}
	va_end(args);
	return (count);
}

