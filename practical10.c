/*
    progerammer: Archit vaghasiya
    date: 2/8/2024
    aim: Make a timer
*/
#include<stdio.h>
void main()
{
    int Time,i;

    printf("Enter a time in second:\t");
    scanf("%d",&Time);

    for(i=Time;i>0;--i)
    {
        printf("%2d\r",i);
        sleep(1);
    }

    printf("Time is up");
}
