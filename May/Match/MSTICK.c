#include <stdio.h>
#include <stdlib.h>

double *b ;

int main()
{
	long i, min, j ;
	int n, q, l, r ;
	double tot, temp ;
	scanf("%d",&n) ;
	b = (double *)malloc(n*sizeof(double)) ;
	for(i=0;i<n;i++)
		scanf("%lf",&b[i]) ;
	scanf("%d",&q) ;
	for(i=1;i<=q;i++)
	{
		scanf("%d%d",&l,&r) ;
		tot = 0 ;
		min = b[l] ;
		for(j=l+1;j<=r;j++)
		{
			if(min > b[j])
				min = b[j] ;
		}
		tot = min ;
		for(j=0;j<n;j++)
		{
			temp = min ;
			if(j<l || j>r)
			{
				temp += b[j] ;
			}
			else
			{
				temp += (b[j] - min)/2 ;
			}
			if(temp > tot)
			{
				tot = temp ;
			}
		}
		printf("%0.1lf\n",tot) ;
	}	
	return 0 ;
}