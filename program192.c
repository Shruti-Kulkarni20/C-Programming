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
    int fd = 0,iRet = 0,iCnt = 0;
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
                printf("%c\n",Buffer[iCnt]);
            }
            
            memset(Buffer,'\0',BUFFER_SIZE);

        }
 
        close(fd);
    }

    return 0;
}