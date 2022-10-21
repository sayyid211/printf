#include "main.h"
/**
 * _printf - mimics standard printf
 * @format: number of characters
 * Return: number of args
 */
int _printf(const char *format, ...)
{
	va_list x;
	int a, b, i = 0;
	int length = 0;
	int ctr = 0;
	char *str_arg, *cop = NULL;

	while (format[length] != '\0')
		length++;

	cop = malloc(sizeof(char) * length);
	if (cop == NULL)
		exit(1);

	va_start(x, format);
	while (format[i] != '\0')
	{
		if (format[i] == '%' && format[i + 1] == 'c')
		{
			str_arg = malloc(sizeof(char) * 2);
			str_arg[0] = (char)va_arg(x, int);
			str_arg[1] = '\0';
			_count(&ctr, str_arg);
			_putstr(str_arg);
			free(str_arg);
			i += 2;
		}
		else if (format[i] == '%' && format[i + 1] == 's')
		{
			str_arg = va_arg(x, char *);
			_count(&ctr, str_arg);
			_putstr(str_arg);
			i += 2;
		}
		else if (format[i] == '%' && format[i + 1] == '%')
		{
			str_arg = malloc(sizeof(char) * 2);
			str_arg[0] = '%';
			str_arg[1] = '\0';
			_count(&ctr, str_arg);
			_putstr(str_arg);
			i += 2;
		}
		else if (format[i] == '%' && format[i + 1] == 'i')
		{
			str_arg = _itoa(va_arg(x, int));
			_count(&ctr, str_arg);
			_putstr(str_arg);
			free(str_arg);
			i += 2;
		}
		else if (format[i] == '%' && format[i + 1] == 'd')
		{
			str_arg = _itoa(va_arg(x, int));
			_count(&ctr, str_arg);
			_putstr(str_arg);
			free(str_arg);
			i += 2;
		}
		else
		{
			for (a = i, b = 0; format[a] != '\0'; a++, b++, i++)
			{
				if (format[a] == '%')
				{
					i = a;
					break;
				}
				else
				{
					cop[b] = format[a];
				}
			}
			cop[b] = '\0';
			_count(&ctr, cop);
			_putstr(cop);
		}
	}
	return (ctr);
}
