//Cout even number

#include<stdio.h>
#include<stdlib.h>

int CountEven(int Arr[],int iLength)
{
	int iCnt=0,iEvenCnt=0;
	
	for(iCnt=0;iCnt<iLength;iCnt++)
	{
		if(Arr[iCnt]%2==0)
		{
			iEvenCnt++;
		}
	}
	return iEvenCnt;
}
int main()
{
	int *ptr=NULL;
	int iCnt=0,iSize=0,iRet=0;
	
	printf("Enter number of elements in array :-\n");
	scanf("%d",&iSize);
	
	ptr=(int *)malloc(iSize*sizeof(int));
	
	printf("Enter elements in array :-\n");
	for(iCnt=0;iCnt<iSize;iCnt++)
	{
		scanf("%d",&ptr[iCnt]);
	}

	iRet=CountEven(ptr,iSize);
	
	printf("Number of even elements are :-%d\n",iRet);
	
	return 0;
}
