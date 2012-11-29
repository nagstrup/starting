/*
 ============================================================================
 Name        : areal.c
 Author      : Peter Olsen
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int radius, area;

int main(void)

{

	setbuf(stdin, NULL);
	setbuf(stdout, NULL);


	printf("Enter radius(i.e. 10):");
	fflush(stdout);
	scanf("%d", &radius);
	area = (int) (3.14159 * radius * radius);
	printf("\n\nArea = %d\n", area);
	fflush(stdout);

	return 0;
}
