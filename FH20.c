#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>

int main()
{
    char Name[30];
    char Arr[30] = { '\0'};
    int fd = 0;
    int iRet = 0;
    printf("ENter the file name to Open : \n");
    scanf("%[^'\n']s", Name);
    
    fd = open(Name, O_RDONLY);
    if(fd == -1)
    {
        printf("Unable to open \n");
    }
    printf("Data from the file is : \n");
    
    while((iRet = read(fd , Arr , 1024) ) != 0)
    {
        write(1 ,Arr,iRet);
    }
    printf("\n");
    

    close(fd);
    return 0;
}