#include<stdio.h>
#include<string.h>
int b[26],a[26];
main()
{
char str[27],bob[100],alice[100];
int i,len,num,sa,sb,weight[26];
scanf("%d",&num);
scanf("%s",str);
for(i=0;i<26;i++)
	weight[(int)str[i]-97]=i;
while(num--)
{
	sa=sb=0;
	scanf("%s%s",alice,bob);
	len=strlen(alice);
	for(i=0;i<len;i++)
	{
		a[(int)alice[i]-97]+=1;
		b[(int)bob[i]-97]+=1;
	}
	for(i=0;i<26;i++)
	{	
		if(a[i]-b[i]>0)
			sa+=weight[i];
		else if(b[i]-a[i]>0)
			sb+=weight[i];
	}
	if(sa>sb)
		printf("ALICE\n");
	else if(sa<sb)
		printf("BOB\n");
	else
		printf("TIE\n");
	for(i=0;i<26;i++)
		a[i]=b[i]=0;
}
return 0;
}