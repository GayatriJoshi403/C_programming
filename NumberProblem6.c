#include<stdio.h>
#include<stdlib.h> //for malloc and free

void Display(int Arr[],int iLength)
{
	int iCnt=0;
	
	printf("Elements in array are :\n");
	for(iCnt=0;iCnt<iLength;iCnt++)
	{
		printf("%d\n",Arr[iCnt]);
	}
}
int main()
{
	int *ptr=NULL;
	int iSize=0,iCnt=0;
	
	printf("Enter number of element :");
	scanf("%d",&iSize);
	
	ptr=(int *)malloc(iSize * sizeof(int));//malloc-memory allocation
	
	printf("Enter elements in array :\n");
	for(iCnt=0;iCnt<iSize;iCnt++)
	{
		scanf("%d",&ptr[iCnt]);
	}
	
	Display(ptr,iSize);
	
	free(ptr);
	
	return 0;
}
