////////////////////////////////////////////////////////////////
// Name : Shruti Shrinivas Kulkarni
// Description : problems on n Numbers (Dynamic memory allocation)
// Date : 23/11/2025
///////////////////////////////////////////////////////////////


#include<stdio.h>
#include<stdlib.h>

int SumEven(int Arr[],int iSize)
{
    int iCnt = 0,iSum = 0;

    for(iCnt = 0;iCnt < iSize;iCnt++)
    {
        if((Arr[iCnt] % 2) == 0)
        {
            iSum = iSum + Arr[iCnt];
        }
        
    }
    return iSum;
}
int main()
{
    int iLength = 0,iCnt = 0,iRet = 0;
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

    printf("Enter the elements :\n");
    for(iCnt = 0;iCnt < iLength;iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    //step 2: Use that memory
  
    iRet = SumEven(ptr,iLength);

    printf("Sum of Even elements : %d\n",iRet);
    //step 3 : free that memory

    free(ptr);
    
    return 0;
}