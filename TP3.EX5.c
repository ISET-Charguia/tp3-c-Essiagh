/*
 ============================================================================
 Name        : EX5.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
	int la,lo,i,j;
	do {
		printf("donner la longueur");
		scanf("%d",&lo);
	printf("donner la largueur");
	scanf("%d",&la);
	} while (lo<0&&la<0);
	for(i=1;i<=la;i++)
		{ printf("\n");
     for (j=1;j<=lo;j++)
     {
    	 printf("*");

        }
	 }
}
