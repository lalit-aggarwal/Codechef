#include<stdio.h>
#include<math.h>
int main()
{
	int num,n;
	scanf("%d\n",&num);
	while(num--)
	{	
		scanf("%d\n",&n);
		printf("%d\n",floor(n/2)+1);
	}
	return 0;
} 