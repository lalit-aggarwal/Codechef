#include<stdio.h>
int main()
{
int num,n,x,arr[150],i,count,sum,min;
scanf("%d",&num);
while(num--)
{
	sum=0;min=100;
	scanf("%d%d",&n,&x);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
		if(arr[i]<min)
			min=arr[i];
		sum+=arr[i];
	}
	count=sum/x;
	if(sum%x>=min)
		printf("-1\n");
	else
		printf("%d\n",count);
}
return 0;
}