#include<stdio.h>
int power(int a,int b)
{
int po=1,i;
for(i=1;i<=b;i++)
	po*=2;
return po;
}
int main()
{
int n,num,i,sum=0;
scanf("%d\n",&num);
while(num--)
{
	scanf("%d\n",&n);
	sum=0;
	i=n;
	while(i)
	{
		sum+=(i%10);
		i/=10;
	}
	printf("%d\n",(n*power(2,sum)));
}
return 0;
}