//Accept one number and check whether is divisible by 5 or not

#include<stdio.h>

typedef int BOOL;
#define TRUE 1
#define FALSE 0

////////////////////////////////////////////////////////////////////////
//  Function name :	Check
//  Description   :	Used to check number is divisible by 5 or not
//  Input         :	Integer
//  Output        :	Boolean
//  Date          :	23/4/2022
//  Author        :	Gayatri chandrakant joshi
////////////////////////////////////////////////////////////////////////

BOOL Check(int iNo)
{
	if((iNo%5)==0)
	{
		return TRUE;
	}
	else
	{
		return FALSE;
	}
}

//////////////////////////////////////////////////////////////////////////
//Accept one number and check whether is divisible by 5 or not
//////////////////////////////////////////////////////////////////////////

int main()
{
	int iValue=0;
	BOOL bRet=FALSE;
	
	printf("Enter number \n");
	scanf("%d",&iValue);
	
	bRet=Check(iValue);
	
	if(bRet==TRUE)
	{
		printf("Divisible by 5\n");
	}
	else
	{
		printf("Not Divisible by 5\n");
	}
	return 0;	
}
