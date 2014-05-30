#include<stdio.h>
int arr[26];
int main()
{
char ch,str[200];
int i;
gets(str);
scanf("%c",&ch);
for(i=0;str[i]!='\0';i++)
	arr[(int)str[i]]++;
printf("%d",arr[(int)ch]);
return 0;
}