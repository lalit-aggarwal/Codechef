#include<stdio.h>
#define x 3333
int count[x];
find(int n)
{
    int sum=1,i,j;
    if((n<x-1)&&(count[n]!=0||n==0))
    return count[n];
    for(i=1;i<=n;i++)
        for(j=1;j<=n/i;j++)
            if(j*i+i-1==n)
            sum+=find(i-1);
    if(n<x-1)
		count[n]=sum;
    return sum;
}
main()
{
    int n;
    count[0]=0;
    count[1]=1;
    count[2]=1;
    count[3]=2;
    count[4]=1;
    scanf("%d",&n);
    printf("%d\n",find(n));
    return 0;
}
