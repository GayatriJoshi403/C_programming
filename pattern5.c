//Input : 4
//output : 1 2 3 4 4 3 2 1

#include<stdio.h>

void Display(int iNo)
{
	int iCnt=0;
	
	for(iCnt=1;iCnt<=iNo;iCnt++)
	{
		printf("%d\t",iCnt);
	}
	for(iCnt=iNo;iCnt>=1;iCnt--)
	{
		printf("%d\t",iCnt);
	}
	printf("\n");
}
int main()
{
	int iValue=0;
	
	printf("Please enter value : ");
	scanf("%d",&iValue);
	
	Display(iValue);
	
	return 0;
	
}
