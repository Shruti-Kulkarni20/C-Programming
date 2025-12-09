////////////////////////////////////////////////
//
// Name        : Shruti Shrinivas Kulkarni
// Descreption : Problems on string 
// Date        : 4/12/2025
// Input       : deRm2dfr
// char        : R
// output      : 2(correct)
// Input       : Demo@23@re
// char        : @
// output      : 2(correct)
////////////////////////////////////////////////

//case insensitive

#include<stdio.h>

int CharFrequency(char *str,char ch)
{
    int iCount = 0;
    int iDisplacement = 0;

    if((ch >= 'A') && (ch <= 'Z'))                             //capital
    {      
        iDisplacement = 32;
    }
    else if((ch >= 'a') && (ch <= 'z'))                        //small
    {
        iDisplacement = -32;
    }
    else                                                       //special symbol
    {
        iDisplacement = 0;
    }
    while(*str != '\0')
    {
       if((*str == ch) || (*str == ch + iDisplacement)) 
       {
           iCount++;
       }

       str++;
    }
    return iCount;
}

int main()
{
    char Arr[50] = {'\0'};
    char cValue = '\0';
    int iRet = 0;

    printf("Enter string :\n");
    scanf("%[^'\n']s",Arr);
   
    printf("Enter the character : \n");
    scanf(" %c",&cValue); 

    iRet = CharFrequency(Arr,cValue);

    printf("%c occurs %d times\n",cValue,iRet);

    return 0;
}