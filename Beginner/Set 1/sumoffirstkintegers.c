#include<stdio.h>
void main()
{
	int n,k,b[100000],s=0,i;
	scanf("%d %d",&n,&k);
	for(i=0;i<n;i++)
	{
		scanf("%d",&b[i]);
		if(k>0)
		{
			s+=b[i];
			k--;
		}
	}
	printf("%d",s);
}
