#include<stdio.h>
int main()
{
	int num,n,s,count,i;
	scanf("%d\n",&num);
	while(num--)
	{
		scanf("%d\n",&n);
		if((--n)%4==0)
			printf("ALICE\n");
		else
			printf("BOB\n");
	}
	return 0;
} 