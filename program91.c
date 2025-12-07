////////////////////////////////////////////////////////////////
// Name : Shruti Shrinivas Kulkarni
// Description : problems on n Numbers 
// Date : 23/11/2025
///////////////////////////////////////////////////////////////


#include<stdio.h>

int main()
{
    int Arr[5];

    printf("Enter the Element : \n");

    scanf("%d",&Arr[0]);
    scanf("%d",&Arr[1]);
    scanf("%d",&Arr[2]);
    scanf("%d",&Arr[3]);
    scanf("%d",&Arr[4]);

    int iCnt = 0;

    for(iCnt = 0;iCnt <=  4;iCnt++)
    {
        printf("%d\n",Arr[iCnt]);
    }
    
    return 0;
}