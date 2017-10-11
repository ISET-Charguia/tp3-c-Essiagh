/*
 ============================================================================
 Name        : A.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
	int e,i,fa;
	do
		{ printf("taper un entier posifif");
		scanf("%d",&e);
	}while(e<0);
	fa=1;
	i=1;
	do
	{ fa=fa*i;
	   i++;
	} while(i<=e);
	printf("la factoriel de %d est %d",e,fa);
	return 0;
}

