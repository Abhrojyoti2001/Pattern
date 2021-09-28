#include<stdio.h>
main()
{
int i,n,j;
printf("Enter length of the pattan ");
scanf("%d",&n);
for(i=1;i<=n;i++)
{for(j=1;j<=i;j++)
printf("* ");
printf("\n");}
}
