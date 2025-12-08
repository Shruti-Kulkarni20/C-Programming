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
    if((ch >= 'a')&&(ch <= 'z'))
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
        printf(" %c is Samll",cValue);
    }
    else
    {
        printf(" %c is  not Small",cValue);
    }

    return 0;
}