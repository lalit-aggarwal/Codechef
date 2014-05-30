#include<stdio.h>
#include<malloc.h>
#define MALLOC (double *)malloc(n*sizeof(double))
#define PRINT printf
#define SCAN scanf
#define FREE(x) free(x)
double findmin(double *a,long l,long r)
{
long i,min=999999999;
for(i=l;i<=r;i++)
	if(a[i]<min)
		min=a[i];
return min;
}
int main()
{
double *b,*result,temp,max;
long i,l,r,n,q;
SCAN("%ld",&n);
b=MALLOC;
for(i=0;i<n;i++)
	SCAN("%lf",&b[i]);
SCAN("%ld",&q);
while(q--)
{
	max=-1;
	result=MALLOC;
	SCAN("%ld%ld",&l,&r);
	temp = findmin(b,l,r);
	for(i=0;i<=n-1;i++)
	{
		if(i>=l && i<=r)
			result[i]=(b[i]+temp)/2;
		else
			result[i]=b[i]+temp;
		if(result[i]>max)
			max=result[i];
	}
	PRINT("%0.1lf\n",max);
	FREE(result);
}
FREE(b);
return 0;
}