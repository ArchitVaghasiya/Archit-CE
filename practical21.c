#include<stdio.h>
#include<math.h>
void main()
{
    int s1,s2,s3,s;
    float A;

    printf("Enter the s1:");
    scanf("%d",&s1);
    printf("Enter the s2:");
    scanf("%d",&s2);
    printf("Enter the s3:");
    scanf("%d",&s3);

    if((s1+s2)>s3 && (s2+s3)>s1 && (s1+s3)>s2)
    {
        printf("This is valide triangle\n");

        s=(s1+s2+s3)/2;

        A=sqrt(s*(s-s1)*(s-s2)*(s-s3));

        printf("The area of the trianle=%.2f",A);
    }

    else
    {
        printf("This is invlaid triangle");
    }
}
