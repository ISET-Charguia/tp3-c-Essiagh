/*
 ============================================================================
 Name        : EX7.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
	int e,f,x,y,d;
	char c;
	do {
		printf("donner un entier positif");
		scanf("%d",&e);
	}while(e<0);
	y=1;
	d=0;
	do
	{
		f=e%2;
		x=f*y;
		d=d*x;
		y=y*10;
		e=e/2;
	}while(y=0);
	printf("%d",d);
}
