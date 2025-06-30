#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>

int main()
{
    int fd = 0;
    int iRet = 0;
    char Name[20];
    char Arr[30];

    printf("Enter the file name that you want ot open:\n");
    scanf("%s",Name);

    fd = open(Name ,O_RDWR);

    if(fd == -1)
    {
        printf("Unable to Open the file\n");
    }
    else
    {
        printf("file successfully opened");        
    }

    printf("ENEter the data to write in file :\n");
    scanf(" %[^'\n']s",Arr);

    iRet = write(fd , Arr,21);
    printf("%d bytes written successfully\n" , iRet);

    close(fd);

    return 0;
}