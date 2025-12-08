////////////////////////////////////////////////
//
// Name        : Shruti Shrinivas Kulkarni
// Descreption : Problems on string 
// Date        : 3/12/2025
// Input       : InDiA
// output      : india
////////////////////////////////////////////////

#include<stdio.h>

void strlwrX(char *str)
{
  int iCount = 0;
  while(*str != '\0')
  {
     if((*str >= 'A')&&(*str <= 'Z'))
     {
        *str = *str + 32;
     }
     str++;
  }
}

int main()
{
    char Arr[50] = {'\0'};

    printf("Enter Your name :\n");
    scanf("%[^'\n']s",Arr);

    strlwrX(Arr);

    printf("updated string is  : %s\n",Arr);

    return 0;
}