#include<stdio.h>
#include<string.h>

int main()
{
	int t,c=1,i,j ;
	char in[17], temp[4][5], w ;
	scanf("%d",&t) ;
	while(t--)
	{
		for(i=0;i<4;i++)
		{
			scanf("%s",temp[i]) ;
		}
		strcpy(in,temp[0]) ;
		for(i=1;i<4;i++)
		{
			strcat(in,temp[i]) ;
		}
		
		if((in[0] != '.' && in[5] != '.' && in[10] != '.' && in[15] != '.') &&
		   ((in[0] == 'T' && (in[5] == in[10]) && (in[10] == in[15])) ||
		   (in[5] == 'T' && (in[0] == in[10]) && (in[10] == in[15])) ||
		   (in[10] == 'T' && (in[0] == in[5]) && (in[5] == in[15])) ||
		   (in[15] == 'T' && (in[0] == in[5]) && (in[5] == in[10])) ||
		   ((in[0] == in[5]) && (in[5] == in[10]) && (in[10] == in[15]))))
		{
			if(in[0] != 'T')
				printf("Case #%d: %c won\n",c++,in[0]) ;
			else if(in[5] != 'T')
				printf("Case #%d: %c won\n",c++,in[5]) ;
			else if(in[10] != 'T')
				printf("Case #%d: %c won\n",c++,in[10]) ;
			else if(in[15] != 'T')
				printf("Case #%d: %c won\n",c++,in[15]) ;
			continue;
		}
		
		if((in[3] != '.' && in[6] != '.' && in[9] != '.' && in[12] != '.') &&
		   ((in[3] == 'T' && (in[6] == in[9]) && (in[9] == in[12])) ||
		   (in[6] == 'T' && (in[3] == in[9]) && (in[9] == in[12])) ||
		   (in[9] == 'T' && (in[3] == in[6]) && (in[6] == in[12])) ||
		   (in[12] == 'T' && (in[3] == in[6]) && (in[6] == in[9])) ||
		   ((in[3] == in[6]) && (in[6] == in[9]) && (in[9] == in[12]))))
		{
			if(in[3] != 'T')
				printf("Case #%d: %c won\n",c++,in[3]) ;
			else if(in[6] != 'T')
				printf("Case #%d: %c won\n",c++,in[6]) ;
			else if(in[9] != 'T')
				printf("Case #%d: %c won\n",c++,in[9]) ;
			else if(in[12] != 'T')
				printf("Case #%d: %c won\n",c++,in[12]) ;
			continue;
		}
		
		for(i=0;i<4;i++)
		{
			if((in[4*i] != '.' && in[4*i+1] != '.' && in[4*i+2] != '.' && in[4*i+3] != '.') &&
			   ((in[4*i] == 'T' && (in[4*i+1] == in[4*i+2]) && (in[4*i+2] == in[4*i+3])) ||
			   (in[4*i+1] == 'T' && (in[4*i] == in[4*i+2]) && (in[4*i+2] == in[4*i+3])) ||
			   (in[4*i+2] == 'T' && (in[4*i] == in[4*i+1]) && (in[4*i+1] == in[4*i+3])) ||
			   (in[4*i+3] == 'T' && (in[4*i] == in[4*i+1]) && (in[4*i+1] == in[4*i+2])) ||
			   ((in[4*i] == in[4*i+1]) && (in[4*i+1] == in[4*i+2]) && (in[4*i+2] == in[4*i+3]))))
			{
				if(in[4*i] != 'T')
					printf("Case #%d: %c won\n",c++,in[4*i]) ;
				else if(in[4*i+1] != 'T')
					printf("Case #%d: %c won\n",c++,in[4*i+1]) ;
				else if(in[4*i+2] != 'T')
					printf("Case #%d: %c won\n",c++,in[4*i+2]) ;
				else if(in[4*i+3] != 'T')
					printf("Case #%d: %c won\n",c++,in[4*i+3]) ;
				break ;
			}
			
			if((in[i] != '.' && in[i+4] != '.' && in[i+8] != '.' && in[i+12] != '.') && 
			   ((in[i] == 'T' && (in[4+i] == in[8+i]) && (in[i+8] == in[i+12])) ||
			   (in[i+4] == 'T' && (in[i] == in[i+8]) && (in[i+8] == in[i+12])) ||
			   (in[i+8] == 'T' && (in[i] == in[i+4]) && (in[i+4] == in[i+12])) ||
			   (in[i+12] == 'T' && (in[i] == in[i+4]) && (in[i+4] == in[i+8])) ||
			   ((in[i] == in[i+4] ) && (in[i+4] == in[i+8]) && in[i+8] == in[i+12])))
			{
				if(in[i] != 'T')
					printf("Case #%d: %c won\n",c++,in[i]) ;
				else if(in[i+4] != 'T')
					printf("Case #%d: %c won\n",c++,in[i+4]) ;
				else if(in[i+8] != 'T')
					printf("Case #%d: %c won\n",c++,in[i+8]) ;
				else if(in[i+12] != 'T')
					printf("Case #%d: %c won\n",c++,in[i+12]) ;
				break ;
			}
		}
		
		for(j=0;j<16;j++)
		{
			if(in[j] == '.')
				break ;
		}
		if(j==16 && i==4)
		{
			printf("Case #%d: Draw\n",c++) ;
			continue ;
		}
		
		if(i==4)
		{
			printf("Case #%d: Game has not completed\n",c++) ;
			continue;
		}
	}
	return 0 ;
}