#include<stdio.h>
void main()
{
    int Day=100,total=0;

    for(Day=1;Day<=100;Day++)
    {
        if(Day%2==0)
        {
            total=total+200;
        }
    }
     printf("total=%d",total);
}
