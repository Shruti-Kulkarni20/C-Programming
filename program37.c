//Perfect No


#include<stdio.h>
#include<stdbool.h>

bool CheckPerfect(int iNo) 
{
    int icnt = 0;
    int iSum = 0;

    if(iNo < 0)           //updator
    {
        iNo = -iNo;
    }

    for(icnt = 1;icnt <= (iNo/2); icnt++)     
    {
        if(iNo % icnt == 0)
        {
            iSum = iSum + icnt;
        }
    }
    
    if(iSum == iNo)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter a Number : \n");
    scanf("%d",&iValue);

    bRet = CheckPerfect(iValue);

   if(bRet == true)
   {
     printf("Number %d is perfect Number\n",iValue);
   }
   else
   {
     printf("Number %d is  not perfect Number\n",iValue);
   }

    return 0;
}