#include<stdio.h>

//If Age 0 to 10 then Ticket Ammount is 100
//If Age 10 to 40 then Ticket Ammount is 500
//If Age greater than 40 then Ticket Ammount is 300

int main()
{
	auto int iAge = 0;
	
	printf("Enter your age\n");
	scanf("%d",&iAge);
	
	if((iAge>=0)&&(iAge<=10))
	{
	   printf("Your ticket ammount is   :100\n");
	}
	
	else if((iAge>10)&&(iAge<=40))
	{
	  printf("Your ticket ammount is   :500\n");
	  
	}
	else if(iAge>40)
	{
		printf("Your ticket amount is :300\n");
	}
	
	
	return 0;
}
