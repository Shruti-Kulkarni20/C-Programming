////////////////////////////////////////////////////////////////
// Name : Shruti Shrinivas Kulkarni
// Description : Problems on Pattern Printing (Non linear)
// Date : 21/11/2025
// Output: *       *       *
//         *       *       *
//         *       *       *
// 
///////////////////////////////////////////////////////////////


#include<stdio.h>

void DisplayPattern()
{
   int j = 0,i = 0;

   for(i = 1;i <= 3;i++)
   {
     for(j = 1;j <= 3;j++)
     {
        printf("*\t");
     }
     printf("\n");
   }

   
}
int main()
{
    DisplayPattern();
    return 0;
}