///////////////////////////////////////////////////////////////
//
// Name        : shruti shrinivas kulkarni
// Descreption : problems on file handling 
// Date        : 05/12/2025
//
///////////////////////////////////////////////////////////////

#include<stdio.h>
#include<fcntl.h>

int main()
{
    int fd = 0;
    char Fname[20] = {'\0'};

    printf("Enter the name of file : \n");
    scanf("%s",Fname);

    //O_RDONLY
    //O_WRONLY
    //O_RDWR

    fd = open(Fname,O_RDWR);

    if(fd == -1)
    {
        printf("Unable to open file.\n");
        return -1;
    }

    printf("File is successfully opend with FD %d\n",fd);

    return 0;
}