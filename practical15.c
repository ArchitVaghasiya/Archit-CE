/*
    progerammer: Archit vaghasiya
    date: 13/9/2024
    aim: make indetifire
*/
#include<stdio.h>
void main()
{
    int A[25],i,x,p=0 ,n=0,e=0,o=0;

    printf("Enter the :");
    scanf("%d",&x);

    for(i=0;i<x;i++)
    {
        printf("Enter the numbers:\n");
        scanf("%d",&A[i]);

        if(A[i]>0)
        {
            p++;
        }

        else
        {
            n++;
        }

        if(A[i]%2==0)
        {
            e++;
        }

        else
        {
            o++;
        }

    }

    printf("total positive numbers are=%d\n",p);
    printf("total nagetive numbers are=%d\n",n);
    printf("total even numbers are=%d\n",e);
    printf("total odd numbers are=%d\n",o);
}
