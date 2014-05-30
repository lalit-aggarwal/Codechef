#include<stdio.h>
int main()
{
int r,c,i,j,sum,a[200][200],n;
int ix,iy,fx,fy;
scanf("%d%d",&r,&c);
for(i=1;i<=r;i++)
	for(j=1;j<=c;j++)
		scanf("%d",&a[i][j]);
scanf("%d",&n);
while(n--)
{
	sum=0;
	scanf("%d%d%d%d",&ix,&iy,&fx,&fy);
	for(i=ix;i<=fx;i++)
		for(j=iy;j<=fy;j++)
			sum+=a[i][j];
	printf("%d\n",sum);
}
return 0;
}