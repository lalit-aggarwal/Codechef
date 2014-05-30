#include<stdio.h>
int z,i,n,a,t;
main()
{
	scanf("%d %d",&n,&a);
	t=a;
	A:if(a<n)
	{
		asm("imull %%ebx,%%eax;":"=a"(a):"a"(a),"b"(t));
		asm("inc %%eax;":"=a"(i):"a"(i));
		goto A;
	}
	printf("%d",i);
	return z;
}