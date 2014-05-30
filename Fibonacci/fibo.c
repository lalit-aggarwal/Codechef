#include<stdio.h>
int main()
{
long long unsigned int n1,n2,a,b,temp,count;
while(1)
{
	count=0;
	scanf("%llu %llu\n",&n1,&n2);
	if(n1==0 && n2==0)
		break;
	a=0;
	b=1;
	while(1)
	{
		if(a>n2)
			break;
		if(a>n1)
			count++;
		temp=a;
		a=b;
		b+=temp;
	}
	printf("%llu\n",count);
}
return 0;
}