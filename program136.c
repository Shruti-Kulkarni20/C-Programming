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
   while(*str !=  '\0')
   {
     printf("%c\n",*str);
     str++;
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