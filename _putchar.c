#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * _puts - Outputs a string to the standard output.
 * @str: pointer to the null-terminated string to be output.
 *
 * Return: string length
 */

int _puts(char *str)
{
	int i = 0;
	int len = 0;

	if (str == NULL)
		str = "(nil)";
	while (str[i] != '\0')
	{
		len += _putchar(str[i]);
		i++;
	}
	return (len);
}
