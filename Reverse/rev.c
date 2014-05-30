#include<stdio.h>
int main()
{	
int count=0,i,j,pos=0;
char str[200],temp[200];
gets(str);
for(i=0;str[i]!='\0';i++)
{
	if(str[i]==' ' || str[i]=='.')
	{
		for(j=i-1;j>=pos;j--)
			temp[count++]=str[j];
		temp[count++]=' ';
		pos=i+1;
	}
}
temp[count-1]='.';
temp[count]='\0';
puts(temp);
return 0;
}