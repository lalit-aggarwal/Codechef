#include <stdio.h>
#include <math.h>
int main()
{
int num,n,r,R,point[501][2],i,j,k;
float d,dr,dR,temp;
scanf("%d\n",&num);
while(num--)
{
	scanf("%d %d\n",&r,&R);
	scanf("%d\n",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d%d",&point[i][1],&point[i][2]);
		d=sqrt(point[i][1]*point[i][1]+point[i][2]*point[i][2]);
		dr=d-r;dR=R-d;
		temp=dr>dR?dr:dR;
		for(j=0;j<i;j++)
		{
			dR=sqrt(((point[i][1]-point[j][1])*(point[i][1]-point[j][1]))+((point[i][2]-point[j][2])*(point[i][2]-point[j][2])));
			if(temp>dR)
				temp=dR;
		}
	}
printf("%0.3f\n",temp);
}
}