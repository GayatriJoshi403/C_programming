//Search given element in array

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool Search(int Arr[],int iLength,int iNo)
{
	int iCnt=0;
	bool flag=false;
	
	for(iCnt=0;iCnt<iLength;iCnt++)
	{
		if(Arr[iCnt]==iNo)
		{
			flag=true;
		}
	}
	return flag;
}
int main()
{
	int iSize=0,iCnt=0,iValue=0;
	bool bRet=false;
	
	int *ptr=NULL;
	
	printf("Enter the number of element :\n");
	scanf("%d",&iSize);
	
	ptr=(int *)malloc(iSize*sizeof(int));
	
	printf("Enter elements in array :\n");
	for(iCnt=0;iCnt<iSize;iCnt++)
	{
		scanf("%d",&ptr[iCnt]);
	}
	printf("Enter element to search :\n");
	scanf("%d",&iValue);
	
	bRet=Search(ptr,iSize,iValue);
	
	if(bRet==true)
	{
		printf("Element is there in the array\n");
	}
	else
	{
		printf("Element is not there in the array\n");
	}
	
	return 0;
}
