/*
      *
    * *
  * * *
* * * *

*/

#include<stdio.h>

void Display(int iRow,int iCol)
{
	int i=0,j=0,k=0;
	
	for(i=1;i<=iRow;i++)
	{
		for(j=iCol;j>=1;j--)
		{
			if(j<=i)
			{
				printf(" ");
			}
			
		}
		for(k=1;k<=i;k++)
		{
			printf("*");
			
		}
		
		printf("\n");
	}
}
int main()
{
	int iValue1=0,iValue2=0;
	
	printf("Enter number of rows :");
	scanf("%d",&iValue1);
	
	printf("Enter number of columns :");
	scanf("%d",&iValue2);
	
	Display(iValue1,iValue2);
	
	return 0;
}

