#include<stdio.h>
int cal(int n, int k)
{
    int i,m1,m2,f1=0,f2=0,item,f=0;
    scanf("%d",&item);
    m1=item%(k+1);
    f1++;
    for(i=1;i<n;i++)
    {
        scanf("%d",&item);
        if((item%(k+1))==m1)
            f1++;
        else if(f==0)
        {
            m2=item%(k+1);
            f=1;
            f2++;
        }
        else if((item%(k+1))==m2)
            f2++;
        else return 0;
    }
    if(f1>1&&f2>1)
        return 0;
    else return 1;
}

int main()
{
    int n,k;
    scanf("%d",&n);
    scanf("%d",&k);
    cal(n,k)?printf("%s\n","YES"):printf("%s\n", "NO");
    return 0;
}