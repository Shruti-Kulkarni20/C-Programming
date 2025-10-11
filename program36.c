//Accept no from user and Display SumFactors


#include<stdio.h>

int SumFactor(int iNo) 
{
    int icnt = 0;
    int iSum = 0;

    if(iNo < 0)           //updator
    {
        iNo = -iNo;
    }

    for(icnt = 1;icnt <= (iNo/2); icnt++)     
    {
        if(iNo % icnt == 0)
        {
            iSum = iSum + icnt;
        }
    }
    return iSum;

}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter a Number : \n");
    scanf("%d",&iValue);

    iRet = SumFactor(iValue);

    printf("Sum of factors are : %d",iRet);

    return 0;
}