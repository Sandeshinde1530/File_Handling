#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>

int main()
{
    int fd = 0;
    char Name[20];
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

    iRet = write(fd , "Jay Ganesh!!" ,11 );
    printf("%d bytes written in the file successfully", iRet);

    close(fd);

    return 0;

}