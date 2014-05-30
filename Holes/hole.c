#include<stdio.h>
int main()
{
int n,i,count=0;
char str[100];
scanf("%d\n",&n);
while(n--)
{
count=0;
scanf("%s\n",&str);
for(i=0;str[i]!='\0';i++)
{
	if((str[i]=='A')||(str[i]=='D')||(str[i]=='O')||(str[i]=='P')||(str[i]=='Q')||(str[i]=='R'))
		count++;
	else if(str[i]=='B')
		count+=2;
}
printf("%d\n",count);
}
return 0;
}