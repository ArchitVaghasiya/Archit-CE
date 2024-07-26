/*
    programmer: Archit Vaghasiya
    date: 26/7/2024
    aim: find which one is more wealthier
*/
#include<stdio.h>
void main()
{
    int raman,suman;
    raman=12000000+6000000+3000000;
    suman=11000000+8000000+8000000;
    printf("raman=%d\n",raman);
    printf("suman=%d\n",suman);
    if(raman>suman)
    {
        printf("raman is wealthier");
    }
    else if(raman<suman)
    {
        printf("suman is wealthier");
    }
    else
    {
        raman=suman;
        printf("raman & suman is same wealthier");
    }


}
