#include"main.h"

/**
 * swap_int - swapa the values of two intergers
 * @a: interger to swap
 * @b: integer to swap
 */

void swap_int(int *a, int *b)

{
	int m;



	m = *a;
	*a = *b;
	*b = m;
}
