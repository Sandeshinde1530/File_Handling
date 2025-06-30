#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>

int main()
{
    int fd = 0;
    char Name[20];
    char Arr[30];
    int iRet = 0;

    printf("Enter the file name which you want to OPEN:\n");
    scanf("%[^'\n']s" , Name);

    fd = open(Name , O_RDWR);
    if(fd == -1)
    {
        printf("Failed to create a file\n");
    }
    else
    {
        printf("File Opened succesfully with FD : %d\n",fd);
    }

    printf("Enter the Data  which you want to write into the  file:\n");
    scanf(" %[^'\n']s" , Arr);

    iRet = write(fd , Arr ,sizeof(Arr));
    printf("%d bytes written in the file successfully", iRet);

    close(fd);

    return 0;

}