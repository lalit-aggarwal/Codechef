#include<stdio.h>
#include<string.h>
int main()
{
    int n,len,i;
    char str[100];
    scanf("%d",&n);
    while(n--)
    {
        scanf("%s",&str);
        len=strlen(str);
        for(i=len/2-1;i>=0;i--)
			printf("%c",str[i]);
        for(i=len-1;i>=len/2;i--)
			printf("%c",str[i]);
        printf("\n");
    }
    return 0;
}