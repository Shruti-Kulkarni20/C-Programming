/*
    Start
        Accept age from user
            If age is less than 5 then there will no ticket
            If it is in between 5 to 18 then it will be 700
            It it is in betwween 18 to 50 it will be 999
            And if it is greater than 50 then it will be 500
    Stop
*/

#include<stdio.h>

#define ERR_INVALID -1

int DisplayTicket(int Age)
{
    if(Age < 0)
    {
        printf("Enter valid Age\n");                                 
        return ERR_INVALID;
    }
    if((Age >= 0) && (Age <= 5))
    {
        return 0;
    }
    else if((Age > 5) && (Age <= 18))
    {
        return 700;
    }
    else if((Age > 18) && (Age <= 50))
    {
        return 999;
    }
    else if(Age > 50)
    {
        return 500;
    }

}
int main()
{
    int iAge = 0,iRet = 0;

    printf("Enter the age : \n");
    scanf("%d",&iAge);

    iRet = DisplayTicket(iAge);

    printf("Ticket for Age %d is %d \n",iAge,iRet);

    return 0;
}