#include<stdio.h>
int reverse(int num)
{
int rem,rev=0;
while(num>0)
{
	rem = num%10;
	rev = rev*10 + rem;
	num/=10;
}
return rev;
}
int add(int a,int b)
{
return a+b;
}
int main()
{
int num,a,b;
scanf("%d\n",&num);
while(num--)
{
scanf("%d %d\n",&a,&b);
a=reverse(a);
b=reverse(b);
printf("%d\n",reverse(add(a,b)));
}
return 0;
}