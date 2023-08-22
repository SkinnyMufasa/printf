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
		str = ("null");
	for (i = 0; str[i] != '\0'; i++)
		len += _putchar(str[i]);

	return (len);
}
