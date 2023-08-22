//find maximum number from array

#include<stdio.h>
#include<stdlib.h>

int Maximum(int Arr[],int iLength)
{
	int iCnt=0,iMax=Arr[0];
	
	for(iCnt=0;iCnt<iLength;iCnt++)
	{
		if(Arr[iCnt]>iMax)
		{
			iMax=Arr[iCnt];
		}
	}
	return iMax;
}

int main()
{
	int *ptr=NULL;
	int iSize=0,iCnt=0,iRet=0;
	
	printf("Enter number of elements in array :-\n");
	scanf("%d",&iSize);
	
	ptr=(int *)malloc(iSize*sizeof(int));
	
	printf("Enter elements in array :-\n");
	for(iCnt=0;iCnt<iSize;iCnt++)
	{
		scanf("%d",&ptr[iCnt]);
	}
	
	iRet=Maximum(ptr,iSize);

	printf("Maximum number is :- %d\n",iRet);
	
	return 0;
}

