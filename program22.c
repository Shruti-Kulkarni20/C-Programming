//divisibility by 3 and 5

#include<stdio.h>
#include<stdbool.h>

bool CheckDivisibility(int iNo)
{
    if(((iNo % 3) == 0)&((iNo % 3) == 0))
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

    printf("Enter the Number :\n");
    scanf("%d",&iValue);

    bRet = CheckDivisibility(iValue);

    if(bRet == true)
    {
        printf("%d is divisible by 5 and 3\n",iValue);
    }
    else
    {
         printf("%d is not divisible by 5 and 3\n",iValue);
    }


    return 0;
}