#include<stdio.h>
#include<string.h>
int main()
{
char str[101],ch;
int i,num,len,j,flag;
scanf("%d",&num);
while(num--)
{	
	flag=0;
	scanf("%s",str);
	len=strlen(str);
	for(i=0,j=len-1;i<j;i++,j--)
	{
		ch=str[i];
		str[i]=str[j];
		str[j]=ch;
	}
	for(i=0;i<len;i++)
	{	
		switch(str[i])
		{	
			case '2':flag=1;break;
			case '3':flag=1;break;
			case '4':flag=1;break;
			case '5':flag=1;break;
			case '7':flag=1;break;
			case '6':str[i]='9';break;
			case '9':str[i]='6';break;
		}
	}
	if(flag==1)
		printf("NO\n");
	else
	{
		printf("YES\n");
		printf("%s\n",str);
	}
}
return 0;
}