//Factor

#include<stdio.h>

void DisplayFactor(int iNo) 
{
    int icnt = 0;

    if(iNo < 0)           //updator
    {
        iNo = -iNo;
    }

    for(icnt = 1;icnt <= (iNo/2); icnt++)     //Time complexity )O(n/2)
    {
        if((iNo % icnt) == 0)
        {
            printf("%d\t",icnt);
        }
    }

}

int main()
{
    int iValue = 0;

    printf("Enter a Number : \n");
    scanf("%d",&iValue);

    DisplayFactor(iValue);

    return 0;
}