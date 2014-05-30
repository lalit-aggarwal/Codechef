#include<stdio.h>
int main()
{
int n,sum,i,num,rem;
scanf("%d\n",&n);
while(n--)
{
	scanf("%d\n",&num);
	sum=0;
	i=num;
	while(i)
	{
		rem=i%10;
		sum+=rem;
		i/=10;
	}
	printf("%d\n",num%sum);
}
return 0;
}