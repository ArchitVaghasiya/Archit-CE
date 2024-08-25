/*
    programmer: Archit Vaghasiya
    date: 25/8/2024
    aim: make a alphabet piramid
*/
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
        for(j=1;j<=i;j++)
        {
            printf("%c",x);
            x++;
        }
        x-=2;
        for(j=(n+1);j<=(n+i-1);j++)
        {
            printf("%c",x);
            --x;
        }
        printf("\n");
    }
}
