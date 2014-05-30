#include<stdio.h>
#include<string.h>
int main()
{
int num,n,i,j,count;
char str[100][50],ch[100][50];
scanf("%d\n",&num);
while(num--)
{
    scanf("%d\n",&n);
	for(i=0;i<n;i++)
		scanf("%s %s\n",str[i],ch[i]);
	count=0;
    for(i=n-1;i>=0;i--)
    {
		!strcmp(ch[i],"+")?count++:count--;
       	for(j=i-1;j>=0 && strcmp(str[i],str[j]);j--);
		if(j>=0)
            !strcmp(ch[j],"+")?count--:count++;
    }
    printf("%d\n",count);
}
return 0;
}