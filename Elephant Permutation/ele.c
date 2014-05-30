#include<stdio.h>
int arr[100];
int inversion(int n)
{
int i,j,count=0;
for(i=1;i<=n;i++)
{
	for(j=i+1;j<=n;j++)
		if(arr[i]>arr[j])
			count++;
}
return count;
}
int l_inversion(int n)
{	
int i,j,count=0;
for(i=1;i<n;i++)
	if(arr[i]>arr[i+1])
		count++;
return count;
}
int main()
{
int num,i,j,n,inv,l_inv;
scanf("%d\n",&num);
while(num--)
{	
	inv=0;l_inv=0;
	scanf("%d\n",&n);
	for(i=1;i<=n;i++)
		scanf("%d",&arr[i]);
	inv=inversion(n);
	l_inv=l_inversion(n);
	if(inv==l_inv)
		printf("YES\n");
	else
		printf("NO\n");
}
return 0;
}