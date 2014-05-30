#include<stdio.h>
int gcd(int a,int b)
{
int i,temp;
temp=a>b?a:b;
for(i=temp;i>=1;i--)
	if(a%i==0 && b%i==0)
		break;
return i;
}
int main()
{
int a[51],num,n,j,i,temp;
scanf("%d\n",&num);
while(num--)
{
	scanf("%d ",&n);
	for(i=0;i<n;i++)
		scanf("%d ",&a[i]);
	temp=a[0];
	for(j=1;j<n;j++)
		temp=gcd(a[j],temp);
	for(i=0;i<n;i++)
		printf("%d ",a[i]/temp);
	printf("\n");
}
return 0;
}