#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>

int main()
{
    char Name[30];
    char Arr[30] = { '\0'};
    char Brr[30] = { '\0'};
    int fd = 0;
    int iRet = 0;
    printf("ENter the file name to Open : \n");
    scanf("%[^'\n']s", Name);
    
    fd = open(Name, _O_RDONLY);
    if(fd == -1)
    {
        printf("Unable to open \n");
    }


    iRet = read(fd,Arr,10);
    // write(1,Arr,iRet);
    printf("Number of bytes read : %d\n",iRet);
    
    iRet = read(fd,Arr,10);
    // write(1,Arr,iRet);
    printf("Number of bytes read : %d\n",iRet);
    
    iRet = read(fd,Arr,10);
    // write(1,Arr,iRet);
    printf("Number of bytes read : %d\n",iRet);
    
    iRet = read(fd,Arr,10);
    // write(1,Arr,iRet);
    printf("Number of bytes read : %d\n",iRet);
    

    close(fd);
    return 0;
}