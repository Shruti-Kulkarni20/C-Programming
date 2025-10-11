//Display factor ands non factor

#include<stdio.h>

void DisplayFactorNonFactor(int iNo) 
{
    int icnt = 0;

    if(iNo < 0)           //updator
    {
        iNo = -iNo;
    }

    for(icnt = 1;icnt <= iNo; icnt++)     
    {
        if((iNo % icnt) == 0)
        {
            printf("factor is %d\n",icnt);
        }
        else
        {
            printf("Non factor is %d\n",icnt);
        }
    }

}

int main()
{
    int iValue = 0;

    printf("Enter a Number : \n");
    scanf("%d",&iValue);

    DisplayFactorNonFactor(iValue);

    return 0;
}