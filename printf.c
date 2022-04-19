#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <stddef.h>
/**
 * _printf - print number of characters
 * @format: char
 * Return: number of chararcters
 */
int _printf(const char *format, ...)
{
	if (format != NULL)
	{
		int co = 0, i;
		va_list args;

		va_start(args, format);
		i = 0;
		if (format[0] == '%' && format[1] == '\0')
			return (-1);
		while (format != NULL && format[1] != '\0')
		{
			if (format[i] == '%')
			{
				if (format[i + 1] == '%')
				{
					co += putchar(format[i]);
					i += 2;
				}
				else
				{
					co = putchar(format[i]) + putchar(format[i + 1]);
					i += 2;
				}
			}
			else
			{
				co += putchar(format[i]);
				i++;
			}
		}
		va_end(args);
		return (co);
	}
	return (-1);
}
