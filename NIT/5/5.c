#include<stdio.h>
int k,n,z,t,s,i;
main(){
scanf("%d",&k);
l:if(i<k){
scanf("%d",&n);
if(n>t){
s=t;
t=n;
}
else if(n>s)
s=n;
asm("inc %%eax;":"=a"(i):"a"(i));
goto l;
}
printf("%d",s);
return z;
}