#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>

int _putchar(char c);
int _printf(const char *format, ...);
int printf_char(va_list val);
int print_string(va_list val);
int _strlen(char *str);
int _strlenc(char *str);
int per_37(void);
int print_int(va_list args);
int print_dec(va_list args);
int print_bin(va_list val);
int print_unsigned(va_list val);
int print_octal(va_list val);
int print_hex(va_list val);
int print_HEX(va_list val);

#endif
