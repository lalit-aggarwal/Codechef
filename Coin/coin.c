#include<stdio.h>
int main()
{
int num,l,q,g;
unsigned long long int n;
scanf("%d\n",&num);
while(num--)
{
	scanf("%d\n",&g);
	while(g--)
	{
		scanf("%d%llu%d\n",&l,&n,&q);
		if(n%2==0)
			printf("%d\n",n/2);
		else
		{
			switch(q)
			{
				case 1:switch(l)
					{
						case 1:printf("%llu\n",n/2);break;
						case 2:printf("%llu\n",(n/2)+1);break;
					}
					 break;
				case 2:switch(l)
					{
						case 1:printf("%llu\n",(n/2)+1);break;
						case 2:printf("%llu\n",n/2);break;
					}
					 break;
			}
		}
	}
}
return 0;
}