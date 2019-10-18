#include <stdio.h>
#include <stdlib.h>
int main() 
{
	printf("Enter the number of lines:\n");
	int n,i,j,k,l;
	scanf("%d",&n);
	printf("\nThe output is:-\n");
	for(i=1;i<=n;i++)
	{
		for(k=1;k<=(n-i);k++)
		printf(" ");
		for(l=1;l<=(i-1);l++)
		printf("*");
		for(j=1;j<=i;j++)
		printf("*");
		printf("\n");
	}
	for(i=1;i<=(n-1);i++)
	{
		for(k=1;k<=i;k++)
		printf(" ");
		for(l=1;l<=(n-1-i);l++)
		printf("*");
		for(j=1;j<=(n-i);j++)
		printf("*");
		printf("\n");
		
	}
	return 0;
}
