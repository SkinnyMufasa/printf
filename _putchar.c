#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriatetly.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

#include "main.h"

/**
  * print_string - print a string
  * @str: a pointer to a string
  * Return: the len of the string
  */

int print_string(char *str)
{
	int i;
	int len = 0;

	if (str == NULL)
		str = "(null)";
	for (i = 0; str[i] != '\0'; i++)
		len += _putchar(str[i]);

	return (len);
}

/**
 * print_number - prints a integer
 * @number: integer
 * Return: lenght of number
 */

int print_number(int number)
{
	if (number < 0)
		return (_putchar('-') + print_number(-1 * number));
	else if (number < 10)
		return (_putchar(number + '0'));
	else
		return (print_number(number / 10) + print_number(number % 10));
}
