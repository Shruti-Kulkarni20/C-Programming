//count digit

#include<stdio.h>

int CountDigit(int iNo)
{
    int iCnt =  0;

    while (iNo != 0)
    {
        iNo = iNo % 10;

        iCnt++;
    }

    return iCnt;
    
}
int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter Number : /n");
    scanf("%d",&iValue);

    iRet = CountDigit(iValue);

    printf("Number of digits are : %d\n",iRet);

   return 0;
}