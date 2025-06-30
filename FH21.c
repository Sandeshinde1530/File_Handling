#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
#define FILESIZE 1024

int main()
{
    char Name[30];
    char Arr[FILESIZE] = { '\0'};
    int fd = 0;
    int iRet = 0;
    int iSum = 0;
    printf("ENter the file name to Open : \n");
    scanf("%[^'\n']s", Name);
    
    fd = open(Name, O_RDONLY);
    if(fd == -1)
    {
        printf("Unable to open \n");
    }
    
    while((iRet = read(fd , Arr , FILESIZE) ) != 0)
    {
        iSum += iRet;
    }
    printf("FileSize is %d\n", iSum);
    

    close(fd);
    return 0;
}