////////////////////////////////////////////////////////////////
// Name : Shruti Shrinivas Kulkarni
// Description : problems on n Numbers (Dynamic memory allocation)
// Date : 1/12/2025
///////////////////////////////////////////////////////////////


#include<stdio.h>
#include<stdlib.h>

int Frequency(int Arr[],int iSize,int iNo)
{
    int iCnt = 0,iCount = 0;

    if((Arr == NULL) || (iSize <= 0))
    {
        printf("Invalid Input\n");
        return -1;
    }

    for(iCnt = 0;iCnt < iSize;iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            iCount++;
        }
        
    }
    return iCount ;
}
int main()
{
    int iLength = 0,iCnt = 0,iValue = 0,iRet =0;
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

    printf("Enter the element that you want to search the frequency : \n");
    scanf("%d",&iValue);
  
    iRet = Frequency(ptr,iLength,iValue);

    printf("Frequency of the element  is : %d \n",iRet);
    free(ptr);
    
    return 0;
}