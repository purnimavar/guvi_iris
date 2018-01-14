#include<stdio.h>
void main()
{
	char c;
	scanf("%c",&c);
	(c>='a' && c<='z' || c>='A' && c<='z')?printf("Alphabet"):printf("No");
}
