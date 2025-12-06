////////////////////////////////////////////////////////////////
// Name : Shruti Shrinivas Kulkarni
// Description : Problems on Pattern Printing 
// Date : 20/11/2025
// Input: 4
// Output: * * * *
///////////////////////////////////////////////////////////////

/*
   Start
     Accept the frequency
     Iterate from 1 to that frequency
     Display * on frequency
     continue
   Stop
*/

#include<stdio.h>

void DisplayPattern(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1;iCnt <= iNo;iCnt++)
    {
        printf("*\t");
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