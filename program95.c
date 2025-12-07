////////////////////////////////////////////////////////////////
// Name : Shruti Shrinivas Kulkarni
// Description : problems on n Numbers 
// Date : 23/11/2025
///////////////////////////////////////////////////////////////


#include<stdio.h>

void Display(int *ptr,int iSize)
{
    printf("Elements from the array :\n");

    printf("%d\n",ptr[0]);
    printf("%d\n",ptr[1]);
    printf("%d\n",ptr[2]);
    printf("%d\n",ptr[3]);
    printf("%d\n",ptr[4]);

}
int main()
{
    int Arr[5];
    int iCnt = 0;

    printf("Enter the Element : \n");

    for(iCnt = 0; iCnt < 5;iCnt++)
    {
        scanf("%d",&Arr[iCnt]);
    }
    
    Display(Arr,5);    //Display(100,5)
    
    
    return 0;
}