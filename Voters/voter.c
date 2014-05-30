#include<stdio.h>
long long int arr[150007],temp[150007];
int main()
{
long long int n1,n2,n3,i,count=0;
long long int n;
scanf("%llu%llu%llu\n",&n1,&n2,&n3);
for(i=1;i<=n1+n2+n3;i++)
{
	scanf("%llu\n",&n);
	arr[n]++;
}
for(i=1;i<150007;i++)
{
	if(arr[i]>=2)
	{		
		count++;
		temp[count]=i;
	}
}
printf("%d\n",count);
for(i=1;i<=count;i++)
	printf("%llu\n",temp[i]);
return 0;
}