#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	//boyutu bizim belirledigimiz kelebek cizimi
		int boyut,i,j,k,l,m,n;
	
	printf("bir rakam giriniz: ");
	scanf("%d",&boyut);
	
	
	for(i=1;i<=boyut;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("*");
		}
		for (k=boyut;k>=i;k--)
		{
			printf(" ");
		}
		for (k=boyut;k>=i;k--)
		{
			printf(" ");
		}
	    for(j=1;j<=i;j++)
		{
			printf("*");
		}

		printf("\n");
	}
	
	
	for(l=1;l<=boyut;l++)
	{
		for(m=boyut;m>=l;m--)
		{
			printf("*");
		}
		for(n=1;n<=l;n++)
		{
			printf(" ");
		}
		for(n=1;n<=l;n++)
		{
			printf(" ");
		}
		for(m=boyut;m>=l;m--)
		{
			printf("*");
		}
		printf("\n");
	}
	
	
	
	
	return 0;
}
