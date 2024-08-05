/*
    progerammer: Archit vaghasiya
    date: 2/8/2024
    aim: Make a menu
*/
#include<stdio.h>
void main()
{
    char Burger,Pizza,Pasta,Sandwich,FrenchFries;
    int Number,total_cost=0;
    printf("For Burger enter number 1\n");
    printf("For Pizza enter number 2\n");
    printf("For Pasta enter number 3\n");
    printf("For Sandwich enter number 4\n");
    printf("For Frenchfries enter number 5\n");
    menu:
    printf("Enter a number:");
    scanf("%d",&Number);

    switch(Number)
    {
        case 1:
        total_cost+=150;
        printf("Burger: 150 rs.\n");
        break;

        case 2:
         total_cost+=200;
        printf("Pizza: 200 rs.\n");
        break;

        case 3:
         total_cost+=120;
        printf("Pasta: 120 rs.\n");
        break;

        case 4:
         total_cost+=100;
        printf("Sandwich: 100 rs.\n");
        break;

        case 5:
         total_cost+=80;
        printf("FrenchFries: 80 rs.\n");
        break;

        case 0:
        printf("Order is finish\n");
        printf("total_cost=%d\n",total_cost);
        return 0;

        default:
        printf("Not in menu");
        break;
    }
    goto menu;


}
