#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;

    printf("Numbers :\n");
    for(iCnt = 1;iCnt <= iNo;iCnt++)
    {
        printf("%d\n",iCnt);
    }

}

int main()
{
    int iValue  = 0;

    printf("Enter the Number : \n");
    scanf("%d",&iValue);

    Display(iValue);

    return  0;

}