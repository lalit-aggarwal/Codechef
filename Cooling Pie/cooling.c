#include<stdio.h>
#include<stdlib.h>
inline int cmp(const void *a,const void *b)
{
   return(*(int*)a-*(int*)b);
}
int main()
{
int num,n,w[150],r[150],i,j,count;
scanf("%d",&num);
while(num--)
{
	count=0;j=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&w[i]);
	for(i=0;i<n;i++)
		scanf("%d",&r[i]);
	qsort(w,n,sizeof(int),cmp);
	qsort(r,n,sizeof(int),cmp);
	for(i=0;i<n;i++)
	{
		if(w[j]<=r[i])
		{
			count++;
			j++;
		}
	}
	printf("%d\n",count);
}
return 0;
}