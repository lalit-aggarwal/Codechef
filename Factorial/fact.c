#include<stdio.h>
#include<math.h>
int calc(int num)
{
int sum=0,i=1,temp=1;
while(temp!=0)
{
	temp=(int)(num/pow(5,i));
	sum+=temp;
	i++;
}
return sum;
}
int main()
{
int num,n;
scanf("%ld\n",&num);
while(num--)
{
	scanf("%d\n",&n);
	printf("%d\n",calc(n));
}
return 0;
}