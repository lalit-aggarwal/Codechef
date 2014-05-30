#include <stdio.h> 
int main()
{ 
  int amt;
  float total=0.00;
  scanf("%d",&amt);
  scanf("%f",&total);
  if(amt>0 && amt<=2000 && total>=0.00 && total<=2000.00)
  {
  if(amt%5==0 && amt <= total-0.50)
  {	
	total=total - amt - 0.50;
  }
  	printf("%f",total);
  }
  return 0; 
} 