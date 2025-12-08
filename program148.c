////////////////////////////////////////////////
//
// Name        : Shruti Shrinivas Kulkarni
// Descreption : Problems on string 
// Date        : 3/12/2025
// Input       : InDiA
// output      : I$d$A
////////////////////////////////////////////////

#include<stdio.h>

void Change(char *str)
{
  int iCount = 0;
  while(*str != '\0')
  {
     if((*str >= 'a')&&(*str <= 'z'))
     {
        *str = '$';
     }
     str++;
  }
}

int main()
{
    char Arr[50] = {'\0'};

    printf("Enter Your name :\n");
    scanf("%[^'\n']s",Arr);

    Change(Arr);

    printf("updated string is  : %s\n",Arr);

    return 0;
}