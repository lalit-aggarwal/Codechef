#include<stdio.h>
#include<string.h>
int u[26],l[26];
void clear(int i)
{
int k;
if(i==65)
	for(k=i;k<=90;k++)
		u[k]=0;
else
	for(k=i;k<=122;k++)
		l[k]=0;
}
int main()
{
int n,len,i,c,ce,co,cue,cuo;
char s[201];
scanf("%d\n",&n);
while(n--)
{	
	ce=0;co=0;cue=0;cuo=0;
	scanf("%s\n",s);
	len=strlen(s);
	clear(65);
	clear(97);
	for(i=0;i<len;i++)
	{
		c=(int)s[i];
		if(c>=65 && c<=90)
			u[c]++;
		else if(c>=97 && c<=122)
			l[c]++;
	}
	for(i=97;i<=122;i++)
	{
		if(l[i]>0)
			if(l[i]%2==0)
				ce+=(l[i]/2);
			else
				co+=(l[i]/2)+1;
	}
	for(i=65;i<=90;i++)
	{
		if(u[i]>0)
			if(u[i]%2==0)
				cue+=(u[i]/2);
			else
				cuo+=(u[i]/2)+1;
	}
	printf("%d\n",co+ce+cue+cuo);
}
return 0;
}