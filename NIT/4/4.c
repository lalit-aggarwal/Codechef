#include<stdio.h>
int i,c,o,d,z;
main()
{
	o=!z;
	d=o;
	char s[o<<8];
	scanf("%s",s);
	i=!o;
	A:if(c=s[i]){
		asm("inc %%eax;":"=a"(i):"a"(i));
		if(c!=s[i]){printf("%c",c);if(d>o)printf("%d",d);d=o;}
		else asm("inc %%eax;":"=a"(d):"a"(d));
		goto A;
	}
	return z;
}