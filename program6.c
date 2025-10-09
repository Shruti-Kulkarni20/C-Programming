//if-else
#include<stdio.h>

void Display(float fPer)
{
    if(fPer < 0.0f || fPer > 100.0f)
    {
        printf("Invalid Input");
        return;
    }
    if((fPer >= 0.0f)&&(fPer < 35.0f))
    {
        printf("fail");
    }
    else if((fPer >= 35.0f ) && (fPer < 50.0f ))
    {
        printf("Pass class");
    }
    else if((fPer >= 50.0f ) && (fPer < 60.0f ))
    {
        printf("second class");
    }
    else if((fPer >= 60.0f ) && (fPer < 70.0f ))
    {
        printf("First class");
    }
    else if((fPer >= 70.0f ) && (fPer < 100.0f ))
    {
        printf("fisrt class with distinction");
    }
}
int main()
{
    float Fper = 0.0f;

    printf("Enter the percentage : \n");
    scanf("%f",&Fper);

    Display(Fper);

    return 0;
}