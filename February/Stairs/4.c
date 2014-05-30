#include<stdio.h>
long long unsigned int bina(long long unsigned int n)
{
long long unsigned int count=0,i;
for (i = 1; i <= n; i = i<<1)
    if (n & i)
        ++count;
return count;
}
long long unsigned int fibo(long long unsigned int num)
{
long long unsigned int a=1,b=2,temp;
if(num==1)
	return 1;
else if(num==2)
	return 2;
else
{
	while(num--)
	{
		temp=a;
		a=b;
		b+=temp;
	}
	return temp;
}
}
int main()
{
long long unsigned int n1,n2,temp,n,count;
scanf("%llu\n",&n);
while(n--)
{
	scanf("%llu %llu\n",&n1,&n2);
	temp=fibo(n1);
	count=bina(temp);
	if(count==n2)
		printf("CORRECT\n");
	else
		printf("INCORRECT\n");
}
return 0;
}