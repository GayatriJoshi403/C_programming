//find minimum number

#include<stdio.h>
#include<stdlib.h>

int Minimum(int Arr[],int iLength)
{
	int iCnt=0,iMin=Arr[0];
	
	for(iCnt=0;iCnt<iLength;iCnt++)
	{
		if(Arr[iCnt]<iMin)
		{
			iMin=Arr[iCnt];
		}
	}
	return iMin;
}
int main()
{
	int *ptr=NULL;
	int iCnt=0,iSize=0,iRet=0;
	
	printf("Enter number of elements :-\n");
	scanf("%d",&iSize);
	
	ptr=(int *)malloc(iSize*sizeof(int));
	
	printf("Enter elements in array :-\n");
	for(iCnt=0;iCnt<iSize;iCnt++)
	{
		scanf("%d",&ptr[iCnt]);
	}
	
	iRet=Minimum(ptr,iSize);	
	
	printf("Minimum number is :- %d \n",iRet);
	
	return 0;
}
