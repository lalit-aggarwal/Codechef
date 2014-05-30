#include<stdio.h>
#include<math.h>
long long check(long long n)
{	
	long long rem,rev=0,temp=n;
	while(temp)
	{
		rem=temp%10;
		rev = rev * 10 + rem;
		temp/=10;
	}
	if(rev==n)
		return 1;
	else
		return 0;
}
int main()
{
	long long num,a,b,count,c=1,i,temp;
	scanf("%lld",&num);
	while(num--)
	{
		count=0;
		scanf("%lld%lld",&a,&b);
		for(i=a;i<=b;i++)
		{
			if(check(i))
			{
			temp=sqrtl(i);
			if(temp*temp==i)
				if(check(temp))
					count++;
			}
		}
		printf("Case #%lld: %lld\n",c++,count);
	}
	return 0 ;
}