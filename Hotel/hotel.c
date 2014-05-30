#include<stdio.h>
#define FOR(i,start,end) for(i=start;i<end;i++)
#define SCAN scanf
#define PRINT printf
int main()
{
int num,n,arr[100],dep[100],i,j,count,ans;
scanf("%d",&num);
while(num--)
{
	SCAN("%d",&n);
	FOR(i,0,n)SCAN("%d",&arr[i]);
	FOR(i,0,n)SCAN("%d",&dep[i]);
	ans=0;
	FOR(i,0,n)
	{
		count=0;
		FOR(j,0,n)
			if(dep[i]<=dep[j] && arr[j]<dep[i])
					count++;
		if(count>ans)
			ans=count;
	}
	PRINT("%d\n",ans);
}
return 0;
}