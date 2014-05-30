#include<stdio.h>
#include<string.h>
#define WHILE while
#define SCAN scanf
#define PRINT printf
int main()
{
int i,j,len,num,n,k,var;
char str[250],ch;
char a[100][100];
SCAN("%d",&num);
while(num--)
{
	SCAN("%d",&n);
	SCAN("%s",str);
	len=strlen(str);
	var=len/n;
	for(i=0;i<var;i++)
		for(j=0;j<n;j++)
			a[i][j]=str[j+i*n];
	for(i=1;i<var;i+=2)
	{
		for(j=0,k=n-1;j<k;j++,k--)
		{
			ch=a[i][j];
			a[i][j]=a[i][k];
			a[i][k]=ch;
		}
	}
	j=0;i=0;
	WHILE(j<n)
	{
		PRINT("%c",a[i][j]);
		i++;
		if(i==var)
		{
			i=0;
			j++;
		}
	}
	PRINT("\n");
}
return 0;
}