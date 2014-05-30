#include<stdio.h>
int main()
{
int n,num,count;
scanf("%d\n",&n);
while(n--)
{
	scanf("%d\n",&num);
	count=(4*num)*(4*num-1)*(4*num-2)/(6)-4*num*(num-1)*(num-2)/6;
	printf("%d\n",count);
}
return 0;
}