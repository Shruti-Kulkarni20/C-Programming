////////////////////////////////////////////////
//
// Name : Shruti Shrinivas Kulkarni
// Descreption : Problems on string 
// Date     : 2/12/2025
//
////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>

bool CheckCapital(char ch)
{
    if((ch >= '0')&&(ch <= '9'))
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
    char cValue = 0;
    bool bRet = false;

    printf("Enter a Digit : \n");
    scanf(" %c",&cValue);

    bRet = CheckCapital(cValue);

    if(bRet == true)
    {
        printf(" %c is  Digit",cValue);
    }
    else
    {
        printf(" %c is  not Digit",cValue);
    }

    return 0;
}