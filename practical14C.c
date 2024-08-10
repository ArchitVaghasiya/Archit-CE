#include<stdio.h>
void main()
{
	int i,j,n;
	char x;
	
	printf("Enter the value of n:");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=(n-i+1);j++)
		{
			printf(" ");
		}
		x='A';
		for(j=(n-i+1);j<=n;j++)
		{
			printf("%c",x);
			x++;
		}
		x='A';
		for(j=2;j<=i;j++)
		{
			printf("%c",x);
			x++;
		}
		printf("\n");
	}
		
}
