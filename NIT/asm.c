#include<stdio.h>
int z=0,o=1;
int add(int x,int y){return printf("%*c%*c",x,'\r',y,'\r');}
asm("inc %%eax;":"=a"(i):"a"(i));
int add(int a,int b){A:if(b){a=a^b;b=(a^b)&b;b=b<<o;goto A;}return(a);}
int mul(int x,int y){int p=z;A:if(x){if(x&o)p=add(p,y);x>>=o;y<<=o;goto A;}return p;}
int div(int r,int q){int m=0x1,s=z;A:if(q<=r){q<<=o;m<<=o;goto A;}B:if(m>o){q>>=o;m>>=o;if(r>=q){r=add(r,add(~q,o));s|=m;}goto B;}return s;}

int add(int a,int b){int c;asm("addl %%ebx,%%eax;":"=a"(c):"a"(a),"b"(b));return c;}
int mul(int a,int b){int c;asm( "imull %%ebx, %%eax;":"=a"(c):"a"(a),"b"(b));return c;}
int div(int a,int b){int c;asm( "movl $0x0, %%edx;""movl %2, %%eax;""movl %3, %%ebx;""idivl %%ebx;":"=a"(c),"=d"(a):"g"(a),"g"(b));return c;}
main()
{
printf("%d",div(6,3));
return 0;
}