#include<stdio.h>
#define SCAN scanf
#define PRINT printf
sub(int n,int m) 
{
while(n>=m)
n-=m; 
return n; 
}
fibo(int n,int m)
{
int a=0,b=1,c;
while(n--)
{
	c=a+b;
	a=sub(a=b,m);
	b=sub(b=c,m);
}
return a;
}
main()
{
int num,n,m;
SCAN("%d",&num);
while(num--)
{
	SCAN("%d%d",&n,&m);
	PRINT("%d/%d\n",fibo(2*n-1,m),fibo(2*n,m));
}
return 0;
}