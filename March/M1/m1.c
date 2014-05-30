#include<stdio.h>
#include<string.h>
main()
{
int n,i,len,k;
char str[27],temp[101],final[101],ch;
scanf("%d%s",&n,str);
while(n--)
{
	k=0;
	scanf("%s",temp);
	len=strlen(temp);
	for(i=0;i<len;i++)
	{
		ch=temp[i];
		if(ch=='_')
			final[k++]=' ';
		else if(isupper(ch))
			final[k++]=toupper(str[(int)ch-65]);
		else if(islower(ch))
			final[k++]=str[(int)ch-97];
		else
			final[k++]=ch;
	}
	final[k]='\0';
	printf("%s\n",final);
}
return 0;
}