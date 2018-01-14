#include<stdio.h>
void main()
{
	int n,sum=0;
	scanf("%i",&n);
	while(n>0)
	{
		sum++;
		n=n/10;
	}
	printf("%i",sum);
}
