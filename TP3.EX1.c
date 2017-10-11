/*
 ============================================================================
 Name        : EX1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
	int e,fa,i;
	do
	{ printf("taper un entier positif");
	scanf("%d",&e);
	} while(e<0);
	fa=1;
	i=1;
	for(i=1;i<=e;i++);
	{ fa=fa*i;
	}
	printf("la factorielle de %d est %d",e,fa);
return 0;
}
