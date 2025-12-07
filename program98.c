////////////////////////////////////////////////////////////////
// Name : Shruti Shrinivas Kulkarni
// Description : problems on n Numbers (Dynamic memory allocation)
// Date : 23/11/2025
///////////////////////////////////////////////////////////////


#include<stdio.h>
#include<stdlib.h>

int main()
{
    int iLength = 0;
    int *ptr = NULL;

    printf("Enter the number of elements : \n");
    scanf("%d",&iLength);

    //step1 : Allocate the memory

    ptr = (int *)malloc(iLength * sizeof(int));

    if(ptr == NULL)
    {
        printf("Unable to allocate the memory.\n");
        return -1;
    }
    else
    {
        printf("Memory gets allocated succesfully.\n");
    }

    //step 2: Use that memory

    //step 3 : free that memory

    free(ptr);
    
    return 0;
}