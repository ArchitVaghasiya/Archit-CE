/*
    progerammer: Archit vaghasiya
    date: 13/9/2024
    aim: to find seats in theator
*/
#include<stdio.h>
void main()
{
    int r,c,x,rs,i,j;
    char seats[10][10];

    for(i=0;i<10;i++)
    {
        for(j=0;j<10;j++)
        {
            seats[i][j]='O';
        }
    }

    printf("Enter the numbers of resevered seats:");
    scanf("%d",&rs);

    for(x=0;x<rs;x++)
    {
        printf("Enter the row & seat number %d (e.g.,2 5):",x+1);
        scanf("%d %d",&r,&c);
        seats[r-1][c-1]='X';
    }

    for(i=0;i<10;i++)
    {
        for(j=0;j<10;j++)
        {
            printf("%c\t",seats[i][j]);
        }
        printf("\n");
    }
}
