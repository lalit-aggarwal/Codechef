#include<stdio.h>
#include<math.h>
int prime(int num)
{
int i;
int SRoot = sqrt(num*1.0);
if(num<=1)
	return 0;
if(num==2)
	return 1;
if(num%2==0)
	return 0;
for(i=3; i<=SRoot; i+=2)
{
	if(num%i==0)
		return 0;
}
return 1;
}

int main()
{
int num,i,a,b,temp;
scanf("%d\n",&num);
while(num>0)
{
	if(num<=10)
	{
		scanf("%d %d\n",&a,&b);
		temp=a;
		while(temp<=b)
		{
			if(prime(temp))
				printf("%d\n",temp);
			temp++;
		}
		printf("\n");
		num--;
	}
}
return 0;
}