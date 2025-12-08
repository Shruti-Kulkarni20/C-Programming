////////////////////////////////////////////////
//
// Name : Shruti Shrinivas Kulkarni
// Descreption : Problems on string 
// Date     : 2/12/2025
//
////////////////////////////////////////////////

#include<stdio.h>

int CountSmall(char *str)
{
    int iCount = 0;

    while (*str != '\0')
    {
        if((*str >= 'a') && (*str <= 'z'))
        {
           iCount++;
        }    
         str++;
    }
    return iCount;
}
int main()
{
    char Arr[50];
    int iRet = 0;

    printf("Enter string : \n");
    scanf("%[^'\n']s",Arr);

    iRet = CountSmall(Arr);

    printf("Number of small character are : %d\n",iRet);

    return 0;
}