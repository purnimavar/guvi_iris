#include<stdio.h>
void main()
{
	int a,b,d;
	scanf("%d %d %d",&a,&b,&d);
	a=a>b?a:b;
	a=a>c?a:d;
	printf("%d",a);
}
