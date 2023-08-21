#include "main.h"
#define is_int(x) _Generic((x), int: 1, default:0)
/**
 * _printf - Custom printf function
 * @format: The format string
 * @...: Variadic arguments
 * Return: Number of characters printed
 */
int _printf(const char *format, ...)
{
	int i, count = 0;
	va_list args;

	if (!format || (format[0] == '%' && format[1] == '\0'))
		return (-1);
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
