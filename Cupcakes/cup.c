#include<stdio.h>
#include<math.h>
int main()
{
int num,n,i,k;
scanf("%d",&num);
while(num--)
{
	scanf("%d",&n);
	k=sqrt(n);
	for(i=k;i>=1;i--)
		if(n%i==0)
			break;
	printf("%d\n",n/i-i);
}
return 0;
} 