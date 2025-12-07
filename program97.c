////////////////////////////////////////////////////////////////
// Name : Shruti Shrinivas Kulkarni
// Description : problems on n Numbers 
// Date : 23/11/2025
///////////////////////////////////////////////////////////////


#include<stdio.h>

int Display(int Arr[],int iSize)
{
    int iCnt = 0;
    int iSum = 0;

    for(iCnt = 0;iCnt < iSize;iCnt++)
    {
       iSum = iSum + Arr[iCnt];
    }   
    return iSum;
}
int main()
{
    int Arr[5];
    int iCnt = 0,iRet = 0;

    printf("Enter the Element : \n");

    for(iCnt = 0; iCnt < 5;iCnt++)
    {
        scanf("%d",&Arr[iCnt]);
    }
    
    iRet = Display(Arr,5);    //Display(100,5)

    printf("Summation of elements : %d",iRet);
    
    
    return 0;
}