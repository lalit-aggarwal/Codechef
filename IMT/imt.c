#include<stdio.h>
#include<string.h>
int main()
{
int n,q,i,j,flag;
char ext[100][100],media[100][100],file[100][100];
char *ch;
scanf("%d %d\n",&n,&q);
for(i=0;i<n;i++)
	scanf("%s %s\n",&ext[i],&media[i]);
for(i=0;i<q;i++)
	scanf("%s\n",&file[i]);
for(i=0;i<q;i++)
{
	ch=strrchr(file[i],'.');
	if(ch!=NULL)
	{
		flag=0;
		ch++;
		for(j=0;j<n;j++)
		{	
			if(!strcmp(ch,ext[j]))
			{
				printf("%s\n",media[j]);
				flag=1;
				break;
			}
		}
		if(!flag)
			printf("unknown\n");
	}
	else
		printf("unknown\n");
}
return 0;
}