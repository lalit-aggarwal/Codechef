#include<stdio.h>
int a[26];
int main()
{
char str[100];
int i;
gets(str);
for(i=0;str[i]!='\0';i++)
	a[(int)str[i]]++;
for(i=97;i<123;i++)
	if(a[i]>0)
		printf("%d%c ",a[i],i);
return 0;
}