#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <string.h>
#include <unistd.h>

void print_number(int num);
void digit_count(int n);
int _putchar(char c);
int _printf(const char *format, ...);
int print_string(char *str);
void print_unsignedint(unsigned int num);
int check_fmt(va_list args, char fmt);
int countstr(const char *str);

#endif
