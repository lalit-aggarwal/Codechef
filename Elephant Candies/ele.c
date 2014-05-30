#include<stdio.h>
int main()
{
int a,num,i;
unsigned long long int b,temp,sum;
scanf("%d\n",&num);
while(num--)
{	
	sum=0;
	scanf("%d %llu\n",&a,&b);
	temp=b;
	for(i=0;i<a;i++)
	{
		scanf("%llu ",&temp);
		sum+=temp;
	}
	sum<=b?printf("Yes\n"):printf("No\n");
}
return 0;
}