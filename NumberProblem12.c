//find frequency of given number

#include<stdio.h>
#include<stdlib.h>

int Frequency(int Arr[],int iLength,int iNo)
{
	int iCnt=0,iFrequency=0;
	
	for(iCnt=0;iCnt<iLength;iCnt++)
	{
		if(Arr[iCnt]==iNo)
		{
			iFrequency++;
		}
	}
	return iFrequency;
}
int main()
{
	int iSize=0,iCnt=0,iValue=0,iRet=0;
	int *ptr=NULL;
	
	printf("Enter number of elements :- \n");
	scanf("%d",&iSize);
	
	ptr=(int *)malloc(iSize*sizeof(int));
	
	printf("Enter elements in array :\n");
	for(iCnt=0;iCnt<iSize;iCnt++)
	{
		scanf("%d",&ptr[iCnt]);
	}
	printf("Enter element to count frequency :-\n");
	scanf("%d",&iValue);
	
	iRet=Frequency(ptr,iSize,iValue);
	
	printf("Frequency of given number is :- %d\n",iRet);
	
	return 0;
}
