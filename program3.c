//Type casting 

#include<stdio.h>

int main()
{
    float fRet = 0.0f;
    int iObt = 400, iTotal= 500;

    fRet = ((float)iObt/(float)iTotal) * 100;

    printf("Persentage is : %.2f%%\n",fRet);  //80.00% - 2f , 4f - 80.0000%

    return 0;
}