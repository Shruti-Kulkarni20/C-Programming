////////////////////////////////////////////////
//
// Name        : Shruti Shrinivas Kulkarni
// Descreption : Problems on string 
// Date        : 4/12/2025
////////////////////////////////////////////////

#include<stdio.h>


int main()
{
    char Arr[50] = {'\0'};
    char cValue = '\0';

    printf("Enter string :\n");
    scanf("%[^'\n']s",Arr);
   
    //problem due to buffer cleanup
    printf("Enter the character : \n");
    scanf("%c",&cValue);

    return 0;
}