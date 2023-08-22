//search first occurrence of number in array

#include<stdio.h>
#include<stdlib.h>

int SearchFirstOccurrence(int Arr[],int iLength,int iNo)
{
	int iCnt=0;
	
	for(iCnt=0;iCnt<iLength;iCnt++)
	{
		if(Arr[iCnt]==iNo)
		{
			break;
		}
	}
	if(iCnt==iLength)
	{
		return -1;
	}
	else
	{
		return iCnt;
	}
}
int main()
{
	int *ptr=NULL;
	int iSize=0,iCnt=0,iRet=0,iValue=0;
	
	printf("Enter number of elements : \n");
	scanf("%d",&iSize);
	
	ptr=(int *)malloc(iSize*sizeof(int));
	
	printf("Enter number of element :\n");
	for(iCnt=0;iCnt<iSize;iCnt++)
	{
		scanf("%d",&ptr[iCnt]);
	}
	printf("Enter number to search :\n");
	scanf("%d",&iValue);
	
	iRet=SearchFirstOccurrence(ptr,iSize,iValue);
	
	if(iRet==-1)
	{
		printf("Element is not there in array\n");
	}
	else
	{
		printf("Element first occurs at : %d \n",iRet);
	}
	return 0;
}
