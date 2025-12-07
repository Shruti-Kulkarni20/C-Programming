////////////////////////////////////////////////////////////////
// Name : Shruti Shrinivas Kulkarni
// Description : problems on n Numbers (Dynamic memory allocation)
// Date : 1/12/2025
///////////////////////////////////////////////////////////////


#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool Search(int Arr[],int iSize,int iNo)
{
    int iCnt = 0;

    if((Arr == NULL) || (iSize <= 0))
    {
        return false;
    }

    for(iCnt = 0;iCnt < iSize;iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            break;
        }
        
    }
    return !(iCnt == iSize);
}
int main()
{
    int iLength = 0,iCnt = 0,iValue = 0;
    int *ptr = NULL;
    bool bRet = false;

    printf("Enter the number of elements : \n");
    scanf("%d",&iLength);

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

    printf("Enter the element that you want to search : \n");
    scanf("%d",&iValue);
  
    bRet = Search(ptr,iLength,iValue);

    if(bRet == true)
    {
        printf("%d is present\n",iValue);
    }
    else
    {
        printf("%d is not present\n",iValue);
    }

    free(ptr);
    
    return 0;
}