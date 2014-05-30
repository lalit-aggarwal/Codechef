#include<stdio.h>
#include<string.h>
int main()
{
int n,i,sum,len;
char str[1000];
scanf("%d\n",&n);
while(n--)
{
	scanf("%s\n",&str);
	len=strlen(str);
	if(len>2)
	{
		sum=0;
		for(i=0;i<len;i++)
		{
			sum+=str[i];
		}
		printf("%c\n",sum/len);
	}
}
return 0;
}