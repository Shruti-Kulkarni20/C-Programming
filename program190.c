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

int main()
{
    int fd = 0,iRet = 0;
    char Fname[20] = {'\0'};
    char Buffer[1024] = {'\0'};

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
         
        while ((iRet = read(fd,Buffer,sizeof(Buffer))) != 0)
        {
            //printf("%s",Buffer);
            write(1,Buffer,iRet);
            memset(Buffer,'\0',sizeof(Buffer));
        }
 
        close(fd);
    }

    return 0;
}