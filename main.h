#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <limits.h>
void _putstr(char *c);
void _count(int *c, char *str);
int _printf(const char *format, ...);
char *_itoa(int n);
#endif /* MAIN_H */
