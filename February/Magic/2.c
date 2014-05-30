#include<stdio.h>
#include<string.h>
int arr[5000][5000],s;
void replace(int num,int value,int flag)
{
int i,j;
for(i=1;i<=s;i++)
	if(flag)
		arr[num][i]=value;
	else
		arr[i][num]=value;
}
int q(int query,int flag)
{
int i,j,count=0;
for(i=1;i<=s;i++)
{
	if(flag)
	{
		if(!arr[query][i])
			count++;
	}
	else
	{
		if(!arr[i][query])
			count++;
	}
}
return count;
}
int main()
{
int i,j,n;
int a,b,c;
int num,value,query;
char str[8];
int count;
scanf("%d %d\n",&s,&n);
while(n--)
{
	scanf("%s ",&str);
	if(!strcmp(str,"RowQuery"))
	{
		scanf("%d\n",&query);
		count=q(query,1);
		printf("%d\n",count);
	}
	else if(!strcmp(str,"ColQuery"))
	{
		scanf("%d\n",&query);
		count=q(query,0);
		printf("%d\n",count);
	}
	else if(!strcmp(str,"RowSet"))
	{
		scanf("%d %d\n",&num,&value);
		replace(num,value,1);
	}
	else if(!strcmp(str,"ColSet"))
	{
		scanf("%d %d\n",&num,&value);
		replace(num,value,0);
	}
	
}
return 0;
}