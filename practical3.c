/*
	programmer name: Archit Vaghasiya
	date: 22/7/2024
	aim: Find simple intrest
*/ 
#include<stdio.h>
void main()
{
	float tp,w,m,lw,lm,iw,im;
	
	// Where w=total  women ,m=total men
	//lw=literate women ,lm=literate men
	//iw=illterate women ,im=illterate men
	//tp=total population
	
	//assign the value of above terms
	tp=1441981744;
	w=697919164;
	m=744062580;
	lm=62318658;
	lw=438572402;
	
	//calculate the illiteracy of men & women in India
	
	printf("The illteracy of men is %.2f\n",(m-lm));
	printf("The illteracy of women is %.2f\n",(w-lw));
}
