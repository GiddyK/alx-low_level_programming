#ifndef _variadic_functions.h_
#define _variadic_functions.h_

#include <stdef.h>

int sum_them_all(const unsigned int n, ...);
 void print_numbers(const char *separator, const unsigned int n, ...);
 void print_strings(const char *separator, const unsigned int n, ...);
 void print_all(const char * const format, ...);

#enddif
