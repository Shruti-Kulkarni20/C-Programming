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

    fd = creat("demo.txt",0777);

    return 0;
}