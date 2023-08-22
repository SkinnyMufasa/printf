#include "main.h"
/**
 * print_number - prints an integer
 * @num: The number to be printed
 *
 * Return: Number of digits printed
 */
void print_number(int num)
{
	if (num < 0)
	{
		_putchar('-');
		num = -num;
	}

	if (num / 10)
		print_number(num / 10);
	_putchar((num % 10) + '0');
}
/**
 * digit_count - counts the number of digit in an integer
 * @n: The integer to count digits for
 * Return: Number of digits in the integer
 */
void digit_count(int n)
{
	int count = 0;

	if (n == 0)
	while (n != 0)
	{
		n /= 10;
		count++;
	}
}
/**
 * check_fmt - checks the format of a character after a '%' in a string
 * @args: the vaa_list
 * @fmt: format character
 * 
 * Return: count
*/
int check_fmt(va_list args, char fmt )
{
	int count = 0;
	
	switch (fmt)
	{
		case 'c':
			if(sizeof(va_arg(args, char)) == 1)
			{
				count += print_char(va_arg(args, int));
			}
			break;
		case 's':
			if(sizeof(va_arg(args, char *)) == 8)
			{
				_puts(va_arg(args, char *));
			}
			break;
		case '%':
			count += _putchar(fmt);
			break;
		case 'i':
		case 'd':
			if(sizeof(va_arg(args, int)) == 4)
			{
				print_number(va_arg(args, int));
			}
			break;
		default:
			count += _putchar(fmt);
			break;
	}
	return (count);
}
