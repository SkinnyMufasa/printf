#include "main.h"
/**
 * print_number - prints an integer
 * @num: The number to be printed
 *
 * Return: Number of digits printed
 */
int print_number(va_list args)
{
	int num, count;
	char *numstr;

	num = va_arg(args, int);
	numstr = int2str(num);
	count = _puts(numstr);
	free(numstr);
	return (count);
}
/**
 * digit_count - counts the number of digit in an integer
 * @n: The integer to count digits for
 * Return: Number of digits in the integer
 */
int digit_count(int n)
{
	int count = 0;

	if (n == 0)
		return (1);
	while (n != 0)
	{
		count++;
		n /= 10;
	}
	return (count);
}
/**
 * check_fmt - checks the format of a character after a '%' in a string
 * @args: the vaa_list
 * @fmt: format character
 *
 * Return: count
*/
int check_fmt(va_list args, char fmt)
{
	int count = 0;

	switch (fmt)
	{
		case 'c':
			if (sizeof(va_arg(args, char)) == 1)
			{
				count += print_char(va_arg(args, int));
			}
			break;
		case 's':
			if (sizeof(va_arg(args, char *)) == 8)
			{
				_puts(va_arg(args, char *));
			}
			break;
		case '%':
			count += _putchar(fmt);
			break;
		case 'i':
		case 'd':
			if (sizeof(va_arg(args, int)) == 4)
			{
				count += print_number(args);
			}
			break;
		default:
			count += _putchar(fmt);
			break;
	}
	return (count);
}
/**
 * int2str - converts intiger into a string
 * @num: number to convert
 * 
 * Return: converted int
*/
char *int2str(int num)
{
	size_t i, neg;
	char *converted_str;

	i = digit_count(num);
	neg = num < 0;
	i += neg;
	converted_str = (char *)malloc(sizeof(char) * i + 1);
	if (converted_str == NULL)
		return (NULL);
	converted_str[i] = '\0';
	if (neg)
		converted_str[0] = '-';
	while (--i != (neg - 1))
	{
		if ((num % 10) < 0)
			converted_str[i] = ((num % 10) * -1) + 48;
		else
			converted_str[i] = ((num % 10) + 48);
		num = num / 10;
	}
	return (converted_str);
}
