//program to check divisibility by 5
#include<stdio.h>
#include<stdbool.h>

bool CheckDivisible(int iNo)
{
    if((iNo % 5)== 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter the Number : \n");
    scanf("%d",&iValue);

    bRet = CheckDivisible(iValue);

    if(bRet == true)
    {
        printf("%d Number is divisoble by 5",iValue);
    }
    else
    {
        printf("%d Number is not divisoble by 5",iValue);
    }

    return 0;
}