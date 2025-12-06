////////////////////////////////////////////////////////////////
// Name : Shruti Shrinivas Kulkarni
// Description : Problems on Pattern Printing (Non linear)
// Date : 21/11/2025
// 
///////////////////////////////////////////////////////////////


#include<stdio.h>

void DisplayPattern()
{
   int j = 0;

   for(j = 1;j <= 3;j++)
   {
    printf("*\t");
   }
   printf("\n");
   for(j = 1;j <= 3;j++)
   {
    printf("*\t");
   }
   printf("\n");
   for(j = 1;j <= 3;j++)
   {
    printf("*\t");
   }
   printf("\n");
}
int main()
{
    DisplayPattern();
    return 0;
}