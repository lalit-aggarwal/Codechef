#include<stdio.h>
#define SCAN scanf
#define PRINT printf
#define FOR(start,end) for(i=start;i<=end;i++)
int arr[10000];
void clear()
{
int i;
FOR(1,10000)
	arr[i]=0;
}
int main()
{
int num,n,i,var,temp,max;
SCAN("%d",&num);
while(num--)
{
	max=0;
	clear();
	SCAN("%d",&n);
	FOR(1,n)
	{
		SCAN("%d",&var);
		arr[var]++;
	}
	FOR(1,10000)
		if(arr[i]!=0)
			if(arr[i]>max)
			{
				max=arr[i];
				temp=i;
			}
	PRINT("%d %d\n",temp,max);
}

return 0;
}