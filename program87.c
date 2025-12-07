////////////////////////////////////////////////////////////////
// Name : Shruti Shrinivas Kulkarni
// Description : Problems on Pattern Printing (Non linear)
// Date : 23/11/2025
// Input: 4  4
//Output: o       o       o       *
//        o       o       *       *
//        o       *       *       *
//        *       *       *       *
///////////////////////////////////////////////////////////////


#include<stdio.h>

void DisplayPattern(int iRow,int iCol)
{
   int j = 0,i = 0;

   if(iRow != iCol)
   {
     printf("Invalid input..\n");        //filter
     return;
   }
  
   for(i = 1;i <= iRow;i++)
   {
     for(j = iCol;j >= 1;j--)
     {
       if ((i + j) > iRow)
       {
         printf("*\t");
       }
       else
       {
        printf("o\t");
       }
       
     }
     printf("\n");
   }

   
}
int main()
{
    int iValue1= 0,iValue2 = 0;

    printf("Enter number of rows : \n");
    scanf("%d",&iValue1);

    printf("Enter number of columns : \n");
    scanf("%d",&iValue2);

    DisplayPattern(iValue1,iValue2);
    return 0;
}