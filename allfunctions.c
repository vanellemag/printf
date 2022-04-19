#include "main.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * printc - prints char
 * @args: char
 * Return: number of char
 */
int printc(va_list args)
{
	int ch;

	ch = va_arg(args, int);
	return (putchar(ch));
}
/**
 * prints - prints string
 * @args: string
 * Return: number of char
 */
int prints(va_list args)
{
	int i, co = 0;
	char *str;

	i = 0;
	str = va_arg(args, char *);
	if (str == NULL)
		str = "(nul)";
	while (str[i] != '\0')
	{
		putchar(str[i]);
		i++;
		co++;
	}
	return (co);
}
/**
 * printper - pass percent sing
 * @args: string
 * Return: %
 */
int printper(va_list args)
{
	char *str;

	str = "%";
	if (va_arg(args, int) == *str)
	{
		return (*str);
	}
	return (*str);
}
/**
 * printd - prints decimal
 * @args: decimal
 * Return: counter
 */
int printd(va_list args)
{
	unsigned int abs, a, co, co1;
	int n;

	co1 = 0;
	n = va_arg(args, int);
	if (n < 0)
	{
		abs = (n * -1);
		co1 += putchar('-');
	}
	else
		abs = n;
	a = abs;
	co = 1;
	while (a > 9)
	{
		a /= 10;
		co *= 10;
	}
	while (co >= 1)
	{
		co1 += putchar(((abs / co) % 10) + '0');
		co /= 10;
	}
	return (co1);
}
/**
 * printi - prints integer
 * @args: int
 * Return: decimal function
 */
int printi(va_list args)
{
	return (printd(args));
}

