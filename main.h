#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <string.h>
#include <unistd.h>

int _putchar(char c);
int _printf(const char *format, ...);
int print_string(char *str);
int check_format(const char *format);
void spec_conditions(char specifier, int *len, va_list argv);
int print_number(int num);

#endif
