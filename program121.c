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
    if((ch >= 'A')&&(ch <= 'Z'))
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

    printf("Enter a Character : \n");
    scanf(" %c",&cValue);

    bRet = CheckCapital(cValue);

    if(bRet == true)
    {
        printf(" %c is Capital",cValue);
    }
    else
    {
        printf(" %c is  not Capital",cValue);
    }

    return 0;
}