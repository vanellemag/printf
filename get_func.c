#include "main.h"
/**
 * getfunc - look for the specifier
 * @a: char
 * Return: int
 */
int (*getfunc(char a))(va_list)
{
	int i = 0;

	spc arr[6] = {
		{"c", printc},
		{"s", prints},
		{"%", printper},
		{"d", printd},
		{"i", printi},
		{NULL, NULL}
	};
	while (arr[i]->val)
	{
		if (a == arr[i]->val[0])
			return ((*arr[i]).ap);
		i++;
	}
	return (NULL);
}
