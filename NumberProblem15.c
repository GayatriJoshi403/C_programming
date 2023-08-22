//search last occurrence of number in array

#include<stdio.h>
#include<stdlib.h>

int SearchLastOccurence(int Arr[],int iLength,int iNo)
{
	int iCnt=0;
	
	for(iCnt=iLength-1;iCnt>=0;iCnt--)
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
	int iSize=0,iCnt=0,iValue=0,iRet=0;

	printf("Enter number of elements :\n");
	scanf("%d",&iSize);
	
	ptr=(int *)malloc(iSize*sizeof(int));
	
	printf("Enter elements in array :\n");
	for(iCnt=0;iCnt<iSize;iCnt++)
	{
		scanf("%d",&ptr[iCnt]);
	}
	printf("Enter element to search :\n");
	scanf("%d",&iValue);
	
	iRet=SearchLastOccurence(ptr,iSize,iValue);

	if(iRet==-1)
	{
		printf("There is no such element in array :\n");	
	}
	else
	{
		printf("Element is occured at : %d \n",iRet);
	}

	return 0;
}
