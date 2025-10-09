//Loop 

#include<stdio.h>

void PrintByFrequency(int iNo)
{
    int i = 0;

    for(i = 1; i <= iNo; i++)
    {
      printf("Marvellous\n");
    }

}
int main()
{
    int Freq = 0,iRet = 0;

    printf("Enter the frequency : \n");
    scanf("%d",&Freq);

    PrintByFrequency(Freq);

    return 0;
}
