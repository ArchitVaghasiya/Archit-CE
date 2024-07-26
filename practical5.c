/*
	programmer: Archit Vaghasiya
	date: 26/7/2024
	aim: convert celsius to fahranhit
*/
#include<stdio.h>
void main()
{
	float C,F;
	printf("Enter the tempreture in celsius:");
	scanf("%f",&C);
	F=((C*9)/5)+32;
	printf("Tempreture in fahranhit=%f",F);
}
