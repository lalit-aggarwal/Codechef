#include <stdio.h> 
int main()
{ 
  int num; 
  while(1)
  {
	scanf("%d\n",&num);
	if(num==42)
		break;
	printf("%d\n",num);
  }
return 0; 
} 