#include<stdio.h>
#include<string.h>
int main()
{
char str[50],substr[50];
gets(str);
gets(substr);
strstr(str,substr)?printf("%c",'Y'):printf("%c",'N');
return 0;
}