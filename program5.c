//percentage 

#include<stdio.h>

float CalculatePercentage(int Obt, int Tot)
{
    float percentage = 0.0f;
    percentage = ((float) Obt/(float) Tot) * 100;
    return percentage;

}
int main()
{
    int iObtain = 0,iTotal = 0;
    float fPercent = 0.0f;

    printf("Enter obtained marks : \n");
    scanf("%d",&iObtain);

    printf("Enter Total marks : \n");
    scanf("%d",&iTotal);

    fPercent = CalculatePercentage(iObtain,iTotal);

    printf("Percentage is : %.2f%% \n",fPercent);


    return 0;
}