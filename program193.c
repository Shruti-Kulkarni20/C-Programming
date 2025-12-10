///////////////////////////////////////////////////////////////
//
// Name        : shruti shrinivas kulkarni
// Descreption : problems on file handling 
// Date        : 05/12/2025
//
///////////////////////////////////////////////////////////////

#include<stdio.h>
#include<fcntl.h>
#include<stdlib.h>
#include<string.h>

#define BUFFER_SIZE 1024

int main()
{
    int fd = 0,iRet = 0,iCnt = 0,iCapCount = 0;
    char Fname[20] = {'\0'};
    char Buffer[BUFFER_SIZE] = {'\0'};

    printf("Enter the name of file that you want to open : \n");
    scanf("%s",Fname);

    fd = open(Fname,O_RDONLY);

    if(fd == -1)
    {
        printf("Unable to open file.\n");
        return -1;
    }
    else
    {
        printf("File is successfully opend with FD %d\n",fd);
         
        while ((iRet = read(fd,Buffer,BUFFER_SIZE)) != 0)
        {
            for ( iCnt = 0; iCnt < iRet; iCnt++)
            {
                if ((Buffer[iCnt] >= 'A') && (Buffer[iCnt] <= 'Z'))
                {
                    iCapCount++;
                }
                
            }
            memset(Buffer,'\0',BUFFER_SIZE);
        }
 
        printf("Number of capital character are : %d\n",iCapCount);
        close(fd);
    }

    return 0;
}