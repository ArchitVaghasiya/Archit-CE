/*
    progerammer: Archit vaghasiya
    date: 5/8/2024
    aim: Make a patterne
*/
#include<stdio.h>
void main()
{
    int i,j,n;

    printf("Enter the value of n:\t");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            if(j%2==0)
            {
                printf("0");
            }
            else
            {
                printf("1");
            }
        }
        printf("\n");
    }
}
