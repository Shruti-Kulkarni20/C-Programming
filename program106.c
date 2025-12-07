////////////////////////////////////////////////////////////////
// Name : Shruti Shrinivas Kulkarni
// Description : problems on n Numbers (Dynamic memory allocation)
// Date : 1/12/2025
///////////////////////////////////////////////////////////////


#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool Search(int Arr[],int iSize)
{
    int iCnt = 0;

    for(iCnt = 0;iCnt < iSize;iCnt++)
    {
        if(Arr[iCnt] == 11)
        {
            break;
        }
        
    }
    if(iCnt == iSize)
    {
        return false;
    }
    else
    {
        return true;
    }
}
int main()
{
    int iLength = 0,iCnt = 0;
    int *ptr = NULL;
    bool bRet = false;

    printf("Enter the number of elements : \n");
    scanf("%d",&iLength);

    //step1 : Allocate the memory

    ptr = (int *)malloc(iLength * sizeof(int));

    if(ptr == NULL)
    {
        printf("Unable to allocate the memory.\n");
        return -1;
    }

    printf("Enter the elements :\n");
    for(iCnt = 0;iCnt < iLength;iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    //step 2: Use that memory
  
    bRet = Search(ptr,iLength);

    if(bRet == true)
    {
        printf("11 is present\n");
    }
    else
    {
        printf("11 is not present\n");
    }
    //step 3 : free that memory

    free(ptr);
    
    return 0;
}