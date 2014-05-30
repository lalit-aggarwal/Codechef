#include<stdio.h>
#define MAX 100000
int arr[MAX];
int main()
{
long int n,q,f,a,b,i,c;
scanf("%ld%ld",&n,&q);
while(q--)
{
	c=0;
	scanf("%ld%ld%ld",&f,&a,&b);
	if(!f)
	{
		for(i=a;i<=b;i++)
			arr[i]=arr[i]?0:1;
	}
	else
	{	
		for(i=a;i<=b;i++)
			if(arr[i])
				c++;
		printf("%ld\n",c);
	}
}	
return 0;
}