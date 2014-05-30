#include<stdio.h>
int main()
{
unsigned long long int num,sum,n;
scanf("%llu",&num);
while(num--)
{
	scanf("%llu",&n);
	sum=((n/2)*((n/2)+1)/2)+(((n-1)/2)*(((n-1)/2)+1)/2);
	printf("%llu\n",sum);
}
return 0;
}