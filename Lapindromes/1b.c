#include<stdio.h>
#include<string.h>
int main()
{
int num,l[26],i,count,len;
char str[1000];
scanf("%d",&num);
while(num--)
{
	count=0;
	for(i=0;i<26;i++)
		l[i]=0;
	scanf("%s",str);
	len=strlen(str);
	if(len%2==0)
		for(i=0;i<len;i++)
			l[(int)str[i]-97]++;
	else
		for(i=0;i<len;i++)
			if(i!=len/2)
				l[(int)str[i]-97]++;
	for(i=0;i<26;i++)
	{
		if(l[i]!=0 && l[i]%2!=0)
		{
			count++;
			if(count>1)
			{	
				printf("NO\n");
				break;
			}
		}
	}
	if(count<=1)
		printf("YES\n");
}
return 0;
}