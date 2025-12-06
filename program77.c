////////////////////////////////////////////////////////////////
// Name : Shruti Shrinivas Kulkarni
// Description : Problems on Pattern Printing (Non linear)
// Date : 22/11/2025
// Input: 4  4
//Output: a a a a
//        B B B B
//        c c c c
//        D D D D
///////////////////////////////////////////////////////////////


#include<stdio.h>

void DisplayPattern(int iRow,int iCol)
{
   int j = 0,i = 0;
   char ch1 = '\0',ch2 = '\0';

   for(i = 1,ch1 ='a',ch2 ='A';i <= iRow;i++,ch1++,ch2++)
   {
     for(j = 1;j <= iCol;j++)
     {
      if((i % 2)==0)
      {
        printf(" %c\t",ch2);
      }
      else
      {
        printf(" %c\t",ch1);
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