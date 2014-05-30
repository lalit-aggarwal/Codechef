#include<stdio.h>
#define SCAN scanf
#define PRINT printf
int main()
{
int num,n,i,sum;
SCAN("%d",&num);
while(num--)
{
	sum=0;
	SCAN("%d",&n);
	for(i=1;i<=n/2;i++)
        if(n%i==0)
			sum+=i;
	PRINT("%d\n",sum);
}
return 0;
}