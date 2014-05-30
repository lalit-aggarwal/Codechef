#include<stdio.h>
int main()
{
	int a,b,i,count=0,arr[25000],var,temp,x,num;
	scanf("%d",&num);
	while(num--)
	{
		scanf("%d%d",&a,&b);
		temp=a;count=0;
		while(temp)
		{
			arr[count++]=temp%10;
			temp/=10;
		}
		temp=0;
		for(i=1;i<a;i++)
		{
			var=0;
			while(var<count)
			{	
				x=arr[var]*a+temp;
				arr[var]=x%10;
				temp=x/10;
				var++;
			}
			while(temp)
			{
				arr[count++]=temp%10;
				temp=temp/10;
			}
		}
		for(i=count-1;i>count-b-1;i--)
			printf("%d",arr[i]);
		printf(" ");
		for(i=b-1;i>=0;i--)
			printf("%d",arr[i]);
		printf("\n");
	}
return 0;
}