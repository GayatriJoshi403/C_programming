#include<stdio.h>

//If Standard is 1st then exam time is at 8Am
//If Standard is 2nd then exam time is at 9Am
//If Standard is 3rd then exam time is at 10Am
//If Standard is 4th then exam time is at 11Am
//If Standard is 5th then exam time is at 12Am

int main()

{
	auto int iStd=0;
	
	printf("Enter your standard\n");
	scanf("%d",&iStd);
	
	if(iStd==1)
	{
	  printf("Your exam is at 8\n");
	  
	}
	
	else if(iStd==2)
	{
   	  printf("Your exam is at 9\n");
	}
	
	
	else if(iStd==3)
	{
   	  printf("Your exam is at 10\n");
	}
	
	else if(iStd==4)
	{
   	  printf("Your exam is at 11\n");
	}
	
	else if(iStd==5)
	{
   	  printf("Your exam is at 12\n");
	}
	
	else
	{
	   printf("Invalid standard\n");
	}

	
	return 0;
}
