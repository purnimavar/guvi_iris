#include <stdio.h>
int main()
{
    int n, i, flag = 0;
	scanf("%d",&n);
    for(i=2; i<=n/2; ++i)
    {
        if(n%i==0)
        {
            flag=1;
            break;
        }
    }
   (flag==0)?printf("Yes"):printf("No");
    return 0;
}
