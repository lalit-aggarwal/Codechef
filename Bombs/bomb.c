#include<stdio.h>
#define SCAN scanf
#define PRINT printf
#define FOR(start,end) for(i=start;i<=end;i++)
int main()
{
int num,n,i,sx,sy,dist,dx,dy;
int x,y;
SCAN("%d",&num);
while(num--)
{	
	dist=0;
	SCAN("%d",&n);
	SCAN("%d%d",&sx,&sy);
	FOR(1,n)
	{
		SCAN("%d%d",&x,&y);
		dx=sx-x;dy=sy-y;
		dx=dx<0?-dx:dx;
		dy=dy<0?-dy:dy;
		dist+=dx+dy;
	}
	PRINT("%d\n",dist*2);
}
return 0;
}