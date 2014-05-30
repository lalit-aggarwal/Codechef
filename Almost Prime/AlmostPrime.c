#include<stdio.h>
#include<math.h>
#define SCAN scanf
#define PRINT printf
#define S(n) sqrt(n)
int prime(unsigned long long int num)
{
unsigned long long int i;
unsigned long long int SRoot = S(num);
if(num<=1)
	return 0;
if(num==2)
	return 1;
if(num%2==0)
	return 0;
for(i=3; i<=SRoot; i+=2)
{
	if(num%i==0)
		return 0;
}
return 1;
}
int main()
{
unsigned long long int num,n,i,count,temp;
SCAN("%llu",&num);
while(num--)
{
	SCAN("%llu",&n);
	temp=S(n);
	count=temp*temp;
	count==n?(prime(temp)?PRINT("YES\n"):PRINT("NO\n")):PRINT("NO\n");
}
return 0;
}