////////////////////////////////////////////////
//
// Name        : Shruti Shrinivas Kulkarni
// Descreption : Problems on string 
// Date        : 3/12/2025
//
////////////////////////////////////////////////

#include<stdio.h>

int Count(char *str)
{
  int iCount = 0;
  while(*str != '\0')
  {
     if(*str == 'a')
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
    int iRet = 0;

    printf("Enter Your name :\n");
    scanf("%[^'\n']s",Arr);

    iRet = Count(Arr);

    printf("Number of character are : %d\n",iRet);

    return 0;
}