#include<stdio.h>
#include<string.h>
int main()
{
    int i,j;
    unsigned long long int value[35]={};
    char str[50];
    value[1]=value[2]=1;
    for(i=3;i<35;i++)
        for(j=1;j<i;j++)
        value[i]+=value[j]*value[i-j];
    scanf("%s",str);
    printf("%llu\n",value[strlen(str)]);
    return 0;
}