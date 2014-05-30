#include<stdio.h>
#include<stdlib.h>
int main()
{
int a,b,i,j,ans=10000000,diff,by[1000],grl[1000];
scanf("%d",&a);
for(i=0;i<a;i++)
	scanf("%d",&by[i]);
scanf("%d",&b);
for(i=0;i<b;i++)
	scanf("%d",&grl[i]);
for(i=0;i<a;i++)
	for(j=0;j<b;j++)
	{
		diff=abs(by[i]-grl[j]);
		if(diff<ans)
			ans=diff;
	}
printf("%d",ans);
return 0;
} 