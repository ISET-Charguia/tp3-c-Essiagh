/*
 ============================================================================
 Name        : EX6.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
	int s,a,j,n,i,k,l,r;

		printf("taper le nombre de lignes");
		scanf("%d",&n);
		s=n;
		for(j=1;j<=s;j++)
		{
		printf(" ");
		}
		printf("*");
		r=1;
		for(i=2;i<n;i++)
		{
			r=r+2;
			printf("\n");
			s=s-1;
			for(k=1;k<=s;k++)
			{ printf(" ");
			}
			for (l=1;l<=r;l++)
			{
				printf("*");
			}
			}
		    }


