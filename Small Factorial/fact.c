#include<stdio.h>
#define SCAN scanf
#define PRINT printf
int main()
{
int num,n,a[400],count,t,i,var,x;
SCAN("%d",&num);
while(num--)
{
	SCAN("%d",&n);
	count=0;
	t=n ;
	while(t>0)
	{
		a[count++]=t%10;
		t/=10;
	}
	for(i=2;i<n;i++)
	{
		t=0;
		var=0;
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
	for(i=count-1;i>=0;i--)
		PRINT("%d",a[i]);
	PRINT("\n");
}
return 0;
} 