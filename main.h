#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>

int print_number(va_list args);
int digit_count(int n);
int _putchar(char c);
int _printf(const char *format, ...);
int _puts(char *str);
void print_unsignedint(unsigned int num);
int check_fmt(va_list args, char fmt);
int countstr(const char *str);
int print_char(char c);
int check_validity(char fmt);

#endif
