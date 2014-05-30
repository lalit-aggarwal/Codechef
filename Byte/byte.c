#include<stdio.h>
int main()
{
float a2,a3,a4;
int b2,b3,b4,num,i=1;
while(i<=10)
{
	scanf("%d\n",&num);
	if(num>0)
	{
	a2 = num/2;
	a3 = num/3;
	a4 = num/4;
	b2 = (int)(a2+0.5);
	b3 = (int)(a3+0.5);
	b4 = (int)(a4+0.5);
	if((b2+b3+b4)>num)
		printf("%d\n",(b2+b3+b4));
	else
		printf("%d\n",num);
	}
	i++;
}
return 0;
}