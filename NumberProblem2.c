#include<stdio.h>

int main()
{
	int Arr[5];
	int iCnt=0;
	
	printf("Enter elements in array :\n");
	for(iCnt=0;iCnt<5;iCnt++)
	{
		scanf("%d",&Arr[iCnt]);
	}
	printf("Elements in array are :\n");
	for(iCnt=0;iCnt<5;iCnt++)
	{
		printf("%d\n",Arr[iCnt]);
	}
	
	return 0;
}
