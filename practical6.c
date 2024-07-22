#include<stdio.h>
void main()
{
    int A,B;
    char O;

    printf("Enter value of A:");
    scanf("%d",&A);

    printf("Enter value of B:");
    scanf("%d",&B);

    fflush(stdin);
    printf("Enter the operator:");
    scanf("%c",&O);


        switch (O)
        {
            case '+':
                printf("%d",A+B);
                break;

            case '-':
                printf("%d",A-B);
                break;

            case '*':
                printf("%d",A*B);
                break;

            case '/':
                printf("%d",A/B);
                break;

            defult:
                printf("Invalide opretor");

        }
}
