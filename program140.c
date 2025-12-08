////////////////////////////////////////////////
//
// Name        : Shruti Shrinivas Kulkarni
// Descreption : Problems on string 
// Date        : 3/12/2025
//
////////////////////////////////////////////////

#include<stdio.h>
#include<string.h>

int main()
{
    char Arr[50] = {'\0'};
    int iRet = 0;

    printf("Enter Your name :\n");
    scanf("%[^'\n']s",Arr);

    iRet = strlen(Arr);
    printf("Length of string is : %d \n",iRet);

    return 0;
}