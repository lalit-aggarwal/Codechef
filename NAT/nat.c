#include<stdio.h>
int main()
{
int num,a[1000000],i,count=0;
scanf("%d\n",&num);
while(num!=0)
{
if(num>=3 && num<=2000)
{
	for(i=0;i<num;i++)
		scanf("%d ",&a[i]);
	printf("\n");
}
scanf("%d\n",&num);
}
return 0;
}