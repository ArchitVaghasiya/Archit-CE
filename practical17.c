/*
    programmer: Archit VAghasiya
    date: 25-9-2024
    aim: To shorting prices of different items
*/
#include<stdio.h>
void main()
{
    int A[25],m,n,x,y,z,w;

    printf("Enter the number of total items:");
    scanf("%d",&n);

    for(x=0;x<n;x++)
    {
        printf("Enter the %d item price:",x+1);
        scanf("%d",&A[x]);
    }

    for(y=0;y<n;y++)
    {
        for(z=(y+1);z<n;z++)
        {
            if(A[y]>A[z])
            {
                m=A[y];
                A[y]=A[z];
                A[z]=m;
            }
        }
    }

    for(w=0;w<n;w++)
    {
        printf("The %d item price is %d\n",w+1,A[w]);
    }
}
