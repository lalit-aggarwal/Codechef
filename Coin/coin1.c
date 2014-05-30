#include<stdio.h>
 
int main()
{
	int num,g,l,q;
	long int n;
	scanf("%d",&num);
	while(num--)
	{
		scanf("%d",&g);
		while(g--)
		{
			scanf("%d %ld %d",&l,&n,&q);
			if(n%2==0 || l&q)
				printf("%ld\n",n/2);
			else
				printf("%ld\n",n/2+1);
		}
	}
 
return 0;
} 