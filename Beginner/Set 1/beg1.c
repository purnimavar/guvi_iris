#include<stdio.h>
void main()
{
	int m;
	scanf("%i",&m);
	if(m>0)
		printf("Positive");
	else if(m<0)
		printf("Negative");
	else if(m=0)
		printf("Zero");
	else
		printf("Invalid Input");
}
