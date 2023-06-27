#include "main.h"

/**
 * rev_string - Reverses a string
 * @s: input string
 * Return: string in reverse
 */

void rev_string(char *s)
{

	char rev = s[0]
	;counter = 0;
	int ;

	while (s != '\0')
		counter++;
			for ( = 0; i < counter; i++)
			{

				counter--;
				rev = s[i];
				s[i] = s[counter];
				s[counter] = rev;
			}

}
