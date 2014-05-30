#include<stdio.h>
int main()
{
int num,n;
scanf("%d\n",&num);
while(num--)
{
	scanf("%d\n",&n);
	if(n%2==0)
		printf("%d\n",n);
	else
		printf("%d\n",n-1);
}
return 0;
}