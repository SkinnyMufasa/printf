#include "main.h"
/**
 * print_unsignedint - Prints an unsigned integer.
 * @num: The unsigned integer to be printed.
 */
void print_unsignedint(unsigned int num)
{
	if (num / 10)
		print_unsignedint(num / 10);
	_putchar((num % 10) + '0');
}
/**
 * print_char - prints a character
 * @c: character to print
 * 
 * Return: 1 if successful Null if not
*/
int print_char(char c)
{
	if(_putchar(c))
		return (1);
	else
		return (0);
}