#include<stdio.h>
#include<string.h>
#include<malloc.h>

int sub(const char *s, const char *t) {
    size_t i;
    const size_t t_len = strlen(t);
    for (i = 0; i < t_len; i++)    
        if (s=(const char*)strchr(s, t[i]))
            s++;
        else
            return 0;
    return 1;
}
int main()
{
char *a,*b;
int num;
scanf("%d",&num);
while(num--)
{
	a=(char *)malloc(25000);
	b=(char *)malloc(25000);
	scanf("%s%s",a,b);
	sub(a,b)||sub(b,a)?printf("YES\n"):printf("NO\n");
	free(a);free(b);
}
return 0;
}

