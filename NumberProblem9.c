//Summation of array elements

#include<stdio.h>
#include<stdlib.h>

int SummationNumber(int Arr[],int iLength)
{
	int iCnt=0,iSum=0;
	
	for(iCnt=0;iCnt<iLength;iCnt++)
	{
		iSum=iSum+Arr[iCnt];
	}
	return iSum;
}

int main()
{
	int *ptr=NULL;
	int iSize=0,iCnt=0,iRet=0;
	
	printf("Enter number of elements :-\n");
	scanf("%d",&iSize);
	
	ptr=(int *)malloc(iSize*sizeof(int));
	
	printf("Enter array elements :-\n");
	for(iCnt=0;iCnt<iSize;iCnt++)
	{
		scanf("%d",&ptr[iCnt]);
	}
	
	iRet=SummationNumber(ptr,iSize);
	
	printf("Summation is :- %d \n",iRet);
	
	return 0;
}
