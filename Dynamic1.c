#include<stdio.h>
#include<stdlib.h>

int main()
{
    int size = 0;
    int *ptr = NULL;

    printf("Enter number of elements : ");
    scanf("%d",&size);
	
    // Step 1 : Allocate the memory
    ptr = (int *)malloc(size * sizeof(int));            
    if(ptr == NULL)
    {
        printf("Unable to allocate memory\n");
    }
    else
    {
        printf("Memory succesfully allocated\n");
    }

    // Step 2: Use the memory

    // Step 3: Free the memory
    
    free(ptr);          
    return 0;
}






