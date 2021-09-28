#include<stdio.h>
main()
{
	int n,i,j,k,l=65;
	printf("Enter length of the pattan ");
	scanf("%d",&n); 
	for (i=1;i<=n;i++)
		{for (j=i;j<=n;j++)
			printf(" ");
		for (k=1;k<=i;k++)
			printf("%c ",l++);
		printf("\n");
		}
}
