#include<stdio.h>
#include<string.h>
int arr[52] ;
int main()
{
	int n,count,i,lu;
	char str[201] ;
	scanf("%d",&n) ;
	while(n--)
	{
		scanf("%s",str) ;
		count=0 ;
		for(i=0;i<52;i++)
			arr[i] = 0 ;
		for(i=0;i<strlen(str);i++)
		{
			count++ ;
			if((int)str[i]>=97 && (int)str[i]<=122)
				lu=(2*((int)str[i]-97)) ;
			else
				lu=(2*((int)str[i]-65)+1) ;
			arr[lu]++ ;
			if(arr[lu]%2==0)
				count-- ;
		}
		printf("%d\n",count) ;
	}
	return 0 ;
}