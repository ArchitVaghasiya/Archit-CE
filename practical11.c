/*
    progerammer: Archit vaghasiya
    date: 2/8/2024
    aim: Make a timer
*/
#include<stdio.h>
void main()
{
    int matchstick=21,User,Computer,i;

    printf("Rules:\n");
    printf("1. The game starts with 21 matchsticks.\n");
    printf("2. The user is asked to pick 1, 2, 3, or 4 matchsticks.\n");
    printf("3. After the user picks, the computer makes its pick.\n");
    printf("4. The player who is forced to pick the last matchstick loses the game.\n\n\n\n");

    while(matchstick>=1)
    {
        printf("Total matchstick remaing %d\n",matchstick);
        printf("Enter a number of matchstick (1 to 4)\t");
        scanf("%d",&User);

        if(User<1)
            {
               printf("Invalid input\n");
               break;
            }
        else if(User>4)
            {
               printf("Invalid input\n");
               break;
            }

        Computer=5-User;
        printf("Computr picks %d\n",Computer);

        matchstick=matchstick-User-Computer;

        if(matchstick==1)
        {
            printf("1 matchstick left\n");
            printf("You are losser\n");
            break;
        }


    }

}
