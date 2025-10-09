//Loop 

#include<stdio.h>

int DisplayPrint(int iNo)
{
    int i = 0;

    for(i = 0; i <= 4; i++)
    {
      printf("%d\n",iNo);
    }

    return i;

}
int main()
{
    int iValue =0;
    int iret = 0;

    printf("Enter the value : \n");
    scanf("%d",&iValue);

    iret = DisplayPrint(iValue);
    
    return 0;
}
