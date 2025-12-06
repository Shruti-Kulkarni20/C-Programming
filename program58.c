////////////////////////////////////////////////////////////////
// Name : Shruti Shrinivas Kulkarni
// Description : Problems on Pattern Printing 
// Date : 20/11/2025
// Input: 4
// Output: -4 -3 -2 -1 0
///////////////////////////////////////////////////////////////


#include<stdio.h>

void DisplayPattern(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;                                 
    }
    for(iCnt = -iNo;iCnt <= 0;iCnt++)
    {
        printf("%d\t",iCnt);
    }
    printf("\n");
}
int main()
{
    int iValue = 0;

    printf("Enter the Frequency : \n");
    scanf("%d",&iValue);

    DisplayPattern(iValue);

    return 0;
}