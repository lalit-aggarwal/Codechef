#include<stdio.h>
#include<string.h>

int main()
{
char str[100],res[100];
int i,k=0;
gets(str);
for(i=0;i<strlen(str);i++)
{
	if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
	{
		i+=2;
	}
	res[k++]=str[i];
}
res[k]='\0';
puts(res);
return 0;
}