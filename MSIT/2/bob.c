#include<stdio.h>
int main()
{
	int num,n,s,count,i;
	scanf("%d\n",&n);
	if((--n)%4==0)
		printf("BOB\n");
	else
		printf("ALICE\n");
	return 0;
} 