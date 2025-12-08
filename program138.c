////////////////////////////////////////////////
//
// Name : Shruti Shrinivas Kulkarni
// Descreption : Problems on string 
// Date     : 3/12/2025
//
////////////////////////////////////////////////

#include<stdio.h>

void Display(char str[])
{
  int i = 0;
  for(i = 0;str[i] != '\0';i++)
  {
    printf("%c\n",str[i]);
  }
    
}

int main()
{
    char Arr[50] = {'\0'};

    printf("Enter Your name :\n");
    scanf("%[^'\n']s",Arr);

    Display(Arr);
    
    return 0;
}