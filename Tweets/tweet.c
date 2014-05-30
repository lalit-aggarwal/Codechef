#include<stdio.h>
#include<string.h>
int a[1000];
int main()
{
int n,k,i,c,count=0;
char str[10];
scanf("%d %d\n",&n,&k);
while(k--)
{
	scanf("%s %d\n",&str,&c);
	if(!strcmp(str,"CLOSEALL"))
	{	
		count=0;
		printf("%d\n",0);
		for(i=1;i<=n;i++)
			a[i]=0;
	}
	else
	{
		for(i=1;i<=n;i++)
		{
			if(c==i)
			{
				a[i]++;
				if(a[i]%2!=0)
				{
					count++;
				}
				else
					count--;
				printf("%d\n",count);
				break;
			}
		}
	}
}
return 0;
}