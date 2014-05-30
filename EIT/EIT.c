#include<stdio.h>
int main()
{
int n,k,i=1,num;
int count=0;
scanf("%d %d\n",&n,&k);
while(i<=n)
{
scanf("%d\n",&num);
i++;
if(num%k==0)
	count++;
}
printf("%d",count);
return 0;
}
