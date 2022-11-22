#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>

/**
 * Prototype Functions
 */

int _putchar(char c);
int _printf(const char *format, ...);
int fn_char(va_list c);
int fn_string(va_list s);
int fn_int(va_list i);
int fn_dec(va_list d);
int fn_rev(va_list r);
int fn_bin(va_list b);
int fn_unsig(va_list u);
int fn_octal(va_list o);
int fn_x(va_list x);
int fn_X(va_list X);
int fn_rot13(va_list R);
/**
 * Added the remaining parts based on what i told you, then notify me for corrections
 * other prototypes decleared check line 19 - 25
 */

#endif
