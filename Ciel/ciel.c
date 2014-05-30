#include<stdio.h>
int main()
{
	int num,n,s,count,i;
	int arr[12]={1,2,4,8,16,32,64,128,256,512,1024,2048};
	scanf("%d\n",&num);
	while(num--)
	{
		count=0;
		s=0;
		scanf("%d\n",&n);
		for(i=11;i>=0;i--)
		{
			while(n>=(s+arr[i]))
			{
				s+=arr[i];
				count++;
			}
		}
		printf("%d\n",count);
	}
	return 0;
}