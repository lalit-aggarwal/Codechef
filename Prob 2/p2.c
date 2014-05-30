#include<stdio.h>
int check(int n)
{
int rev=0,rem,temp;
temp=n;
while(n)
{
	rem=n%10;
	rev=rev*10 + rem;
	n/=10;
}
if(rev==temp)
	return rev;
else
	return 0;
}
int main()
{
int n,num,x;
scanf("%d\n",&n);
while(n--)
{
	scanf("%d\n",&num);
	num+=1;
	x=0;
	while(x==0)
	{
		x=check(num);
		num++;
	}
	printf("%d\n",x);
}
return 0;
}