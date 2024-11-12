#include<stdio.h>
void main()
{
    int S[25],T,n,H,L,i,j=1,c,max,min;
    float A;

    printf("Enter the number of student:");
    scanf("%d",&n);
    printf("Enter CCP markes of students\n");
    for(i=0;i<n;i++)
    {
        printf("Student %d: ",j++);
        scanf("%d",&S[i]);
    }

    for(i=0;i<n;i++)
    {
        c=c+S[i];
    }

    printf("Total Marks = %d\n",c);

    A=(float)c/n;

    printf("Average Marks = %.2f\n",A);

    max=S[0];
    for(i=0;i<n;i++)
    {
        if(S[i]>max)
        {
            max=S[i];
        }
    }
     printf("Highest Marks = %d\n",max);

      min=S[0];
    for(i=0;i<n;i++)
    {
        if(S[i]<min)
        {
            min=S[i];
        }
    }
     printf("Lowest Marks = %d",min);


}
