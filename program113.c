////////////////////////////////////////////////////////////////
// Name : Shruti Shrinivas Kulkarni
// Description : problems on n Numbers (Dynamic memory allocation)
// Date : 1/12/2025
///////////////////////////////////////////////////////////////


#include<stdio.h>
#include<stdlib.h>

int Maximum(int Arr[],int iSize)
{
    int iCnt = 0,iMax = 0;

    if((Arr == NULL) || (iSize <= 0))
    {
        printf("Invalid Input\n");
        return -1;
    }

    iMax = Arr[0];
    
    for(iCnt = 0;iCnt < iSize;iCnt++)
    {
        if(Arr[iCnt] > iMax)
        {
            iMax = Arr[iCnt];
        }
        
    }
    return iMax ;
}
int main()
{
    int iLength = 0,iCnt = 0,iRet =0;
    int *ptr = NULL;
   

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
  
    iRet = Maximum(ptr,iLength);

    printf("Maximum of the element  is : %d \n",iRet);
    free(ptr);
    
    return 0;
}