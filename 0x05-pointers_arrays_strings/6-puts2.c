#include "main.h"
/**
 * puts2 - function should print only one character out of two
 * starting with the first one
 * @str: input
 * Return: print
 */
void puts2(char *str)
{

	int longi = 0;
	int t  = 0;
	char *y = str;
	int O;

	while  (*y != '\0')
	{

		y++;
		longi++;

	}
	t = longi - 1;
	for (O = 0 ; O <= t ; O++)
	{

			if (O % 2 == 0)
			{
				_putchar(str[O]);
			}
		}
	_putchar('\n');
}
