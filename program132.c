////////////////////////////////////////////////
//
// Name : Shruti Shrinivas Kulkarni
// Descreption : Problems on string 
// Date     : 3/12/2025
//
////////////////////////////////////////////////

#include<stdio.h>


int main()
{
    char Arr[50] = {'\0'};

    printf("Enter Your name :\n");
    scanf("%[^'\n']s",Arr);

    printf("Your name is : %s\n",Arr);
    
    return 0;
}