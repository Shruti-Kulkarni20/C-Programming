//Count Digits

#include<stdio.h>

int CountDigits(int iNo)
{
    int iCnt = 0,iDigit = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iNo = iNo / 10;
        iCnt++;
    }
}
int main()
{
    int iValue = 0,iRet = 0;

    printf("Enter a Number : \n");
    scanf("%d",&iValue);

    iRet = CountDigits(iValue);

    printf("Number of Digits are : %d\n",iRet);

    return 0;
}