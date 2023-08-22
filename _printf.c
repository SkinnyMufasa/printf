#include "main.h"
/**
 * _printf - Custom printf function
 * @format: The format string
 * @...: Variadic arguments
 * Return: Number of characters printed
 */
int _printf(const char *format, ...)
{
	int i = 0, count = 0;
	va_list args;

	va_start(args, format);
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);
	if (format[i] == '\0')
		return (-1);
	while (format && format[i])
	{
		if (format[i] == '\0')
			return (i);
		if (format[i] == '%')
		{
			i++;
			if (check_validity(format[i]) == 1)
			{
				count += check_fmt(args, format[i]);
				i++;
			}
			else
				return (-1);
		}
		else
		{
			if (format[i] == '\0')
				return (i);
			_putchar(format[i]);
			count++;
			i++;
		}
	}
	va_end(args);
	return (count);
}
