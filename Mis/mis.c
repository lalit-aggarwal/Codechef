#include<stdio.h>
int main()
{
int num,n,i,j,k;
int a[100000],temp[100000];
scanf("%d\n",&num);
while(num--)
{	
	j=0;
	scanf("%d\n",&n);
	for(i=2;i<=n;i+=2)
		a[++j]=i;
	for(i=1;i<=n;i+=2)
		a[++j]=i;
	for(i=1;i<=n;i++)
		temp[i]=i;
	for(i=1;i<=n;i++)
	{
		
	}
}
return 0;
}