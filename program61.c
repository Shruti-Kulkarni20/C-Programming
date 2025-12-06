////////////////////////////////////////////////////////////////
// Name : Shruti Shrinivas Kulkarni
// Description : Problems on Pattern Printing 
// Date : 21/11/2025
// Input: 4  #
// Output: # # # #
// Input: 5  &
// Output: & & & & &
// Input: 3  z
// Output: z z z
///////////////////////////////////////////////////////////////


#include<stdio.h>

void DisplayPattern(int iNo,char ch)
{
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;                                 
    }
    for(iCnt = 1;iCnt <= iNo;iCnt++)
    {
        printf(" %c\t",ch);
    }
    printf("\n");
}
int main()
{
    int iValue = 0;
    char ch = '\0';

    printf("Enter the Frequency : \n");
    scanf("%d",&iValue);

    printf("Enter a character to print : \n");
    scanf(" %c",&ch);

    DisplayPattern(iValue,ch);

    return 0;
}