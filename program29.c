//Factorial //using unsigned//using while loop

#include<stdio.h>
#define ERR_INVALID -1

unsigned long Factorial(unsigned int iNo)
{
    int iCnt = 0;
    unsigned long ifact = 1;

    if(iNo < 0)
    {
        return ERR_INVALID;
    }

    iCnt = 1;
    while (iCnt <= iNo)
    {
        ifact = ifact * iCnt;
        iCnt++;
    }
    
    return ifact;
}
int main()
{
    unsigned int iValue = 0;
    unsigned long iRet = 0;

    printf("Enter the number: \n");
    scanf("%u",&iValue);

    iRet = Factorial(iValue);

    if(iRet == ERR_INVALID)
    {
        printf("Invalid Input");
    }
    else
    {
        printf("Factorial is : %lu",iRet);
    }

    return 0;
}