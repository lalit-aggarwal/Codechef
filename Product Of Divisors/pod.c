#include<stdio.h>
#define SCAN scanf
#define PRINT printf
int a[400],count;
void mul(int i)
{
	int t=0,var=0,x;
	while(var<count)
	{
		x=a[var]*i+t;
		a[var]=x%10;
		t=x/10;
		var++;
	}
	while(t>0)
	{
		a[count++]=t%10;
		t/=10;
	}
}
int main()
{
int num,n,i;
SCAN("%d",&num);
while(num--)
{
	count=1;
	SCAN("%d",&n);
	for(i=0;i<400;i++)
		a[i]=0;
	a[0]=1;
	for(i=1;i<=n/2;i++)
		if(n%i==0)
			mul(i);
	if(count>=4)
		for(i=3;i>=0;i--)
			PRINT("%d",a[i]);
	else
		for(i=count-1;i>=0;i--)
			PRINT("%d",a[i]);
	PRINT("\n");
}
return 0;
} 