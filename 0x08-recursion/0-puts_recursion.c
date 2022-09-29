#include "main.h"

/**
 * _puts_recursion - prints a string follwed by a newline
 *
 * @s: the string we print
 *
 * Retrurn: void
 */
void _puts_recursion(char *s)
{
	if (s[0] == '\n')
	{

		_putchar('\n');
		return;
	}
		_putchar(s[0]);
		_puts_recursion(s + 1);
	

}	
