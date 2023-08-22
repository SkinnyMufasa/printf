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
 * Return: 1 if successful Null if not
*/
int print_char(char c)
{
	if(_putchar(c))
		return (_putchar(c));
	else
		return (0);
}
/**
 * check_validity - checks if the formater does not start with '\'
 * @fmt: the formater
 * 
 * Return: 1 (valid) 0 (!valid) -1 (error)
*/
int check_validity(char fmt)
{
	int validity;
	int valid = 1, invalid = 0;
	
	switch (fmt)
	{
		case '\0':
		case '\n':
			validity = invalid;
			break;
		default:
			validity = valid;
			break;
	}
	return (validity);
}