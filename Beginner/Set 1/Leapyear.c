#include<stdio.h>
void main()
{
	int n;
	scanf("%d",&n);
	((n%400==0 || n%100!=0) && n%4==0)?printf("yes"):printf("no");
		
}
