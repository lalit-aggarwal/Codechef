#include<stdio.h>
#define SCAN scanf
#define PRINT printf
find(int n)
{
int a=1,i=0;
A:if(a<n)
{
	asm("imull %%ebx,%%eax;":"=a"(a):"a"(a),"b"(2));
	asm("inc %%eax;":"=a"(i):"a"(i));
	goto A;
}
return i;
}
int main()
{
int a,b,c,d,n,sum,i;
while(SCAN("%d.%d.%d.%d %d",&a,&b,&c,&d,&n)!=EOF)
{
	sum=0;
	switch(find(n))
	{
	case 1:sum=128;break;
	case 2:sum=192;break;
	case 3:sum=224;break;
	case 4:sum=240;break;
	case 5:sum=248;break;
	case 6:sum=252;break;
	case 7:sum=254;break;
	case 8:sum=255;break;
	}
	if(a<128)
		PRINT("255.%d.0.0\n",sum);
	else if(a>127&a<192)
		PRINT("255.255.%d.0\n",sum);
	else if(a>191&a<224)
		PRINT("255.255.255.%d\n",sum);
}
return 0;
}