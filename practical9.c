/*
    progerammer: Archit vaghasiya
    date: 2/8/2024
    aim: Define gread based of obtain marks
*/
#include<stdio.h>
void main()
{
	int Marks;
	
	printf("Enter your Marks :\t");
	scanf("%d",&Marks);
	
	
	if(Marks<=100 && Marks>=90)
	{
		printf("You enterd vailde Marks\n");
		printf("You got A grade");
	}
	
	else if(Marks>=80 && Marks<90)
	{
		printf("You got B grade");
	}
	
	else if(Marks>=70 && Marks<80)
	{
		printf("You got C grade");
	}
	
	else if(Marks>=60 && Marks<70)
	{
		printf("You got D grade");
	}
	
	else if(Marks<60)
	{
		printf("You got F grade");
	}
	
	else
	{
		
		printf("you entered invalid marks\n");
	
	}

}
