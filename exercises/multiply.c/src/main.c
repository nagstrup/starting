/*
 * main.c
 *
 *  Created on: 12/11/2012
 *      Author: Peter
 */

#include <stdio.h>

int val1, val2, val3;

int product (int x, int y);

int main (void)
{
	printf("Enter a number between 1 and 100: ");
	scanf("%d", &val1);

	printf("Enter a number between 1 and 100: ");
	scanf("%d", &val2);

	val3 = product (val1, val2);
	printf ("%d times %d = %d\n", val1, val2, val3);

	return 0;
}

int product(int x, int y)
{
	return (x * y);
}

