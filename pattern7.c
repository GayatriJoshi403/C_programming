//Input : 5
//output : 1 * 3 * 5 *  

#include<stdio.h>

void Display(int iNo)
{
	int iCnt=0;
	
	for(iCnt=1;iCnt<=iNo;iCnt++)
	{
		if(iCnt%2==0)
		{
			printf("*\t");
		}
		else
		{
			printf("%d\t",iCnt);
		}
	}
	printf("\n");
}
int main()
{
	int iValue=0;
	
	printf("Please enter value");
	scanf("%d",&iValue);
	
	Display(iValue);
	
	return 0;
}
