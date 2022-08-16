#include<stdio.h>
#include<string.h>


int strlenX(char str[])
{
	int iCnt=0;
	int iLength=0;
	
	for(iCnt=0;str[iCnt]!='\0';iCnt++)
	{
		iLength++;
	}

	return iLength;
}

int strlenXX(char str[])
{
	int iCnt=0;
	int iLength=0;
	
	while(str[iCnt]!='\0')
	{
		iCnt++;
		iLength++;
		
	}
	
	return iLength;
	

}

int strlenXXX(const char *str)
{
	int iCnt=0;
	
	while(*str!='\0')
	{
		iCnt++;
		str++;
	}
	
	return iCnt;

}

int main()
{
	char Arr[20]={'\0'};
	
	int iRet=0;
	
	printf("Enter your name : \n");
	scanf("%s",Arr);

	printf("Entered name is :%s\n",Arr);
	
	iRet=strlenXXX(Arr);
	
	printf("String length is : %d\n",iRet);	
	
	return 0;
}
