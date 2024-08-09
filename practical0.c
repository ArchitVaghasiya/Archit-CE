#include<stdio.h>
void main()
{
    int i,j,n,n1,n2,x;

    printf("Enter value of n1:");
    scanf("%d",&n1);
     printf("Enter value of n2:");
    scanf("%d",&n2);

    for(i=1;i<=n1;i++)
    {
        for(j=1;j<=(n1-i+1);j++)
        {
            printf(" ");
        }
        for(j=1;j<=i;j++)
        {
            printf("*");
        }
        for(j=5;j<=(n1+i-1);j++)
        {
            printf("*");
        }
        printf("\n");
    }

    for(i=1;i<=n2;i++)
    {
        for(j=0;j<=i;j++)
        {
            printf(" ");
        }
        for(j=1;j<=(n2-i+1);j++)
        {
            printf("*");
        }
        for(j=0;j<=(n2-i-1);j++)
        {
            printf("*");
        }
        printf("\n");
    }
}
