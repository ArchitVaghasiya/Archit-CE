#include<stdio.h>
void main()
{
    int row,col,i,j;

    printf("Enter value of row:\t");
    scanf("%d",&row);

    printf("Enter value of col:\t");
    scanf("%d",&col);
    printf("Multiplication table (%d * %d)\n",row,col);

    for(i=1;i<=row;i++)
    {
        for(j=1;j<=col;j++)
        {
            printf("%3d",i*j);
        }
        printf("\n");
    }
}

