#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>

int main()
{
    int fd = 0;
    int iRet = 0;
    char Name[30] = {'\0'};
    char Data[1024] = {'\0'};

    printf("Enter the file name that you want to open: \n");
    scanf("%[^'\n']s" , Name);

    fd = open(Name , O_RDWR);
    if(fd == -1)
    {
        printf("Unable to open the file\n");
    }
    else
    {
        printf("FIle opened successfully with FD : %d\n",fd);

        printf("Data from the opened file : %s\n",Data);

        iRet = read(fd ,Data , sizeof(Data));
        printf("%d bytes read succesfully\n",iRet);
        Data[iRet] = '\0';// setting the end 

        printf("Data from the opened file : %s\n",Data);

        close(fd);
    }

    return 0;
}