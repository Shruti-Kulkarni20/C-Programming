//Calculate percentage get input from user

#include<stdio.h>

int main()
{
    int iObt = 0,iTotal = 0;
    float percentage = 0.0f;

    printf("Enter obtained marks :\n");
    scanf("%d",&iObt);

    printf("Enter Toatal Marks : \n");
    scanf("%d",&iTotal);

    percentage = ((float)iObt/(float)iTotal) * 100;

    printf("Percentage is : %.2f%%\n",percentage);


    return 0;
}