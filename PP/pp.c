#include<stdio.h>
int prime(unsigned int n)
{
unsigned int i,flag;
for(i=2;i<=n/2;i++)
{
    flag=1;
    if(n%i==0)
	{
        flag=0;
        break;
	}
} 
if(flag==1)
    return 1;
else 
	return 0;    
}
int palin(unsigned int n)
{
unsigned int rev=0,temp,rem;

temp=n;
while(temp)
{
	rem=temp%10;
    rev=10*rev+rem;
    temp=temp/10;       
}   
if(rev==n)
{
    if(prime(n))
		return 1;
	else 
		return 0;
}
    return 0;
}
int main()
{
unsigned int n,p,i,k;
scanf("%d",&n);
for(i=n;i<=1003001;i++)
{
	p=palin(i);
    if(p==1)
	{
        printf("%d\n",i);
        break;
	}        
}
return 0;
} 