#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int boyut,i,j,k,l;
	
	printf("bir rakam giriniz: ");
	scanf("%d",&boyut);
	
	
	for(i=1;i<=boyut;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("*");
		}
		for(k=boy;k>=i;k--)
		{
			printf(" ");
		}
		for(l=1;l<=i;i++)
		{
			printf("*");
		}
		printf("\n");
	}
	
	
	
	
	
	
	return 0;
}
