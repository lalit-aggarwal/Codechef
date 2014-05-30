#include<stdio.h>
int main()
{
int a,b,sum,count,ra,rb;
 
while(1)
{
	count=0;
	sum=0;
	scanf("%d%d",&a,&b);
	if(a==0&&b==0)
		break;
	while(a!=0||b!=0)
	{
		ra=a%10;
		rb=b%10;
		if(sum>=10)
			sum=ra+rb+1;
		else
			sum=ra+rb;
		if(sum>=10)
			count++;
		a=a/10;
		b=b/10;
}
if(count==0)
	printf("No carry operation.\n");
else
	printf("%d carry operations.\n",count);
 }
}