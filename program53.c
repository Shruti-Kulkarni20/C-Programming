////////////////////////////////////////////////////////////////
// Name : Shruti Shrinivas Kulkarni
// Description : Problems on Pattern Printing 
// Date : 20/11/2025
// Input: 4
// Output: 1 2 3 4 
///////////////////////////////////////////////////////////////


#include<stdio.h>

void DisplayPattern(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;                                 //filter
    }

    for(iCnt = 1;iCnt <= iNo;iCnt++)
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