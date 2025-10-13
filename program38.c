#include<stdio.h>
#include<stdbool.h>

bool PrimeNo(int iNo)
{
    int iCnt = 0;
    bool bFlage = true;

    for(iCnt = 2;iCnt <= iNo/2;iCnt++)
    {
        if(iNo % iCnt == 0)
        {    
           bFlage = false;
           break;
        }
    }
    return bFlage;


}
int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter the number : \n");
    scanf("%d",&iValue);

    bRet = PrimeNo(iValue);

    if(bRet = true)
    {
        printf("%d is prime Number\n",iValue);
    }
    else
    {
        printf("%d is Not prime Number\n",iValue);
    }
    return 0;
}