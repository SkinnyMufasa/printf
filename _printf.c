#include "main.h"

/**
 * check_format - checks format for unhandled cases
 * @format: string
 * Return: 0 if OK, -1 if KO
 */

int check_format(const char *format)
{
	if (!format || (format[0] == '%' && !format[1]))
		return (-1);
	if (format[0] == '%' && format[1] == ' ' && !format[2])
		return (-1);
	return (0);
}

/**
 * _printf - function that produces output according to a format
 * @format: string to be printed
 * Return: output lenght
 */

int _printf(const char *format, ...)
{
	int i, len = 0;
	va_list argv;

	if (check_format(format) == -1)
		return (-1);

	va_start(argv, format);

	for (i = 0; format != NULL && format[i] != '\0'; i++)
	{
		if (format[i] != '%')
			len += _putchar(format[i]);
		else
		{
			if (format[i + 1] != '\0')
				i++;

			spec_conditions(format[i], &len, argv);
		}
	}

	va_end(argv);
	return (len);
}
