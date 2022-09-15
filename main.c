#include <stdio.h>
#include "main.h"
/**
 * main - entrypoint
 *
 * return: always 0
 */
int main(void)
{
	int squared;
	/* squared = getSquare(2); */ /* unction to square an int*/ 
	squared = gtSquared('a');
	printf("the value of squared is: %d\n", squared);
	return(0);
}
