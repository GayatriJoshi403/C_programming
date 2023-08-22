#include<stdio.h>

void Display(int *ptr)
{
	int iCnt=0;
	
	printf("Elements in array are : \n");
	for(iCnt=0;iCnt<5;iCnt++)
	{
		printf("%d\n",*ptr);
		ptr++;
	}
}
int main()
{
	int Arr[5],iCnt=0;
	
	printf("Enter elements in array :\n");
	for(iCnt=0;iCnt<5;iCnt++)
	{
		scanf("%d",&Arr[iCnt]);
	}
	
	Display(Arr);

	return 0;
}
