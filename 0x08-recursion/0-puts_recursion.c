#include "main.h"

/**
 * _puts_recursion - prints a string follwed by a newline
 * @s: the string we print
 * Retrurn: void
 */
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s = 1);
	}
	if (!*s)
	_putchar('/n');
}	
