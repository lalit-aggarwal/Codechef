#include<stdio.h>
int main()
{
int a,b,diff;
scanf("%d %d\n",&a,&b);
diff=a-b;
if(diff%10==0)
	printf("%d",diff+1);
else
	printf("%d",diff-1);
return 0;
}