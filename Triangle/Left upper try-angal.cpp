#include<stdio.h>
main()
{
int i,n,j;
printf("Enter length of the pattan ");
scanf("%d",&n);
for(i=n;i>=1;i--)
	{for(j=i;j>=1;j--)
	printf("*");
	printf("\n");
	}
}
