#include<stdio.h>
#include<math.h>
long long main()
{
long long num,r,t,count_ring,temp,c=1;
scanf("%lld",&num);
while(num--)
{
count_ring=0;
scanf("%lld%lld",&r,&t);
temp=1-2*r;
count_ring = (temp + sqrtl(temp*temp+8*t))/4;
printf("Case #%lld: %lld\n",c++,count_ring);
}
return 0;
}