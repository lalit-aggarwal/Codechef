#include<stdio.h>
#include<string.h>
int a[5000][5000];
int main()
{
int i,j,len,x,y,max=-1,r,c;
char str[50];
scanf("%d%d",&r,&c);
while(c--)
{	
	scanf("%s%d%d",str,&x,&y);
	if(!strcmp(str,"RowAdd"))
	{	
		for(i=1;i<=r;i++)
			a[x][i]+=y;
	}
	else if(!strcmp(str,"ColAdd"))
	{	
		for(i=1;i<=r;i++)
			a[i][x]+=y;
	}
}
for(i=1;i<=r;i++)
	for(j=1;j<=r;j++)
	{
		if(a[i][j]>max)
			max=a[i][j];
	}
printf("%d\n",max);
return 0;
}