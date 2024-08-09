/*
    programmer: Archit Vaghasiya
    date: 9/8/2024
    aim: make a dimond pattern
*/
#include<stdio.h>
void main()
{
    int i,j,n,n1,n2,x;

    printf("Enter the value of n:");
    scanf("%d",&n);
    
    n1=(n/2);
    n2=n-n1;
    
    for(i=1;i<=n1;i++)
    {
        for(j=(-1);j<=(n1-i+1);j++)
        {
            printf(" ");
        }
        for(j=1;j<=i;j++)
        {
            printf("*");
        }
        for(j=(n1+1);j<=(n1+i-1);j++)
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
