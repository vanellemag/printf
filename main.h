#ifndef _MAIN_H_
#define _MAIN_H_
#include <stdio.h>
#include <stdarg.h>
/** specific - struct
 * @val: char
 * @ap: int
 *
 */
typedef struct specific
{
	char *val;
	int (*ap)(va_list);
}spc;
int _printf(const char *format, ...);
int prints(va_list args);
int printc(va_list args);
int printd(va_list args);
int printi(va_list args);
int printper(va_list args);
int (*getfunct(char a))(va_list);
#endif /*_MAIN_H_*/
