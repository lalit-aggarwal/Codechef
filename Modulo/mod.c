#include<stdio.h>
int arr[42];
void clear(int a[])
{
int i;
for(i=0;i<42;i++)
	a[i]=0;
}
int main()
{
int i,j,num,temp,k,var=0;
for(i=0;i<10;i++)
{
	for(j=0;j<10;j++)
	{
		scanf("%d\n",&num);
		temp=num%42;
		arr[temp]++;
		var=0;
	}
	for(k=0;k<42;k++)
		if(arr[k]!=0)
			var++;
	printf("%d\n",var);
	clear(arr);
}
return 0;
}