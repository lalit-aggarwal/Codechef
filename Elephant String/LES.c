#include<stdio.h>
#include<string.h>
int main()
{
int k,n,len,i,j,flag=0;
char b[60][60],s[60];
scanf("%d %d\n",&k,&n);
for(i=0;i<k;i++)
	scanf("%s\n",b[i]);
for(i=0;i<n;i++)
{
	scanf("%s\n",s);
	flag=0;
	len=strlen(s);
	if(len>=47)
		printf("Good\n");
	else
	{
		for(j=0;j<k;j++)
		{
			if(strstr(s,b[j]))
			{
				printf("Good\n");
				flag=1;
				break;
			}	
		}
		if(!flag)
			printf("Bad\n");
	}

}
return 0;
}