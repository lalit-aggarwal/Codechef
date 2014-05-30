#include<stdio.h>
int arr[1000002];
int main()
{
int i,num,n,j;
scanf("%d\n",&num);
while(num--)
{
	scanf("%d\n",&n);
	arr[n]++;
}
for(i=1000000;i>=0;i--)
{
	for(j=0;j<arr[i];j++)
		printf("%d\n",i);
}
return 0;
}