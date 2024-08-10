#include<stdio.h>
void main()
{
	int i,j,x,n;
	
	printf("Enter the valu of n:");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=(n-i+1);j++)
		{
			printf(" ");
		}
		x=1;
		for(j=(n-i+1);j<=n;j++)
		{
			printf("%d",x);
			x++;
		}
		printf("\n");
	}
}
