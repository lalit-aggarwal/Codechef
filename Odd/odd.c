#include<stdio.h>
#include<math.h>
int calc(int num)
{
int i=1;
while(num>=pow(2,i))
{
	i++;
}
return pow(2,i-1);
}
int main()
{
int num,i=1,n;
scanf("%d\n",&num);
while(i<=num)
{
scanf("%d\n",&n);
printf("%d\n",calc(n));
i++;
}	
return 0;
}