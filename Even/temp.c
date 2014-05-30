#include<stdio.h>
int main()
{
int num,n,even=0,odd=0;
scanf("%d",&n);
while(n--)
{
	scanf("%d",&num);
	if(num%2==0)
		even++;
	else
		odd++;
}
if(odd>even)
	printf("%d",odd-even);
else
	printf("%d",even-odd);
return 0;
} 