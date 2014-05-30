#include <stdio.h>
int point[1000][2];
float sign(int x1, int y1, int x2, int y2, int x3, int y3)
{
  return (((x1 - x3) * (y2 - y3)) - ((x2 - x3) * (y1 - y3)));
}
int PointInTriangle(int x1, int y1, int x2, int y2, int x3, int y3, int x, int y)
{
int b1, b2, b3;
if(sign(x1,y1, x2,y2, x3,y3) < 0)
	b1 =1 ;
if(sign(x1,y1, x3,y3, x,y) < 0)
	b2 =1 ;
if(sign(x1,y1, x,y, x2,y2) < 0)
	b3 =1 ;
if((b1 == b2) && (b2 == b3) && (b1==b3))
   return 1;
}
int main()
{
int n,q,i=1,temp;
int x,y,d,count;
scanf("%d %d\n",&n,&q);
temp=n;
while(n--)
{
	scanf("%d %d\n",&point[i][1],&point[i][2]);
	i++;
}
while(q--)
{	
	count=0;
	scanf("%d %d %d\n",&x,&y,&d);
	for(i=1;i<=temp;i++)
	{
		if(PointInTriangle(x+d,y,x,y,x,y+d,point[i][1],point[i][2]))
			count++;
	}
	printf("%d\n",count);
}
return 0;
}